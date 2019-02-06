#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node{
	char name[20];
	int phone;
	struct Node*next;
};
typedef struct Node node;

void print_list(node *head){
    node *temp = head;
    printf("The telephone book now has: \n");
    while(temp){
        printf("%s %d\n", temp->name, temp->phone);
        temp = temp->next;
    }
}
int get_list_size(node *head){
    int cnt = 0;
    while(head){
        cnt++;
        head = head->next;
    }
    return cnt;
}
node* Merge(node **head1, node **head2){
    node *new_head = NULL;
    if(*head1 == NULL) return *head2;
    if(*head2 == NULL) return *head1;

    if(strcmp((*head1)->name, (*head2)->name) < 0){
        new_head = *head1;
        new_head->next = Merge(&((*head1)->next), &*head2);
    }else{
        new_head = *head2;
        new_head->next = Merge(&*head1, &((*head2)->next));
    }
    return new_head;
}
void Mergesort(node **head){
    if((*head)->next != NULL){
        int size = get_list_size(*head);
        
        node *head1 = NULL;
        node *head2 = *head;
        for(int cnt = 0; cnt < size/2; cnt++){
            head1 = head2;
            head2 = head2->next;
        }
        head1->next = NULL;
        head1 = *head;
        Mergesort(&head1);
        Mergesort(&head2);
        (*head) = Merge(&head1, &head2);
    }
}

int main(){
    char name[20];
    int phone;
    node *head = NULL;
    //Please create and ask the user insert elements in the linked list
    //and end the input by typing
    while(scanf("%s", name)){
        if (strcmp(name,"end") == 0) break;
        scanf("%d", &phone);
        //the following do the insertion at the end
        node *temp = (node*)malloc(sizeof(node));
        temp->next = NULL;
        strcpy(temp->name, name);
        temp->phone = phone;
        if (head==NULL) head = temp;
        else{
            node *last = head;
            while(last->next) last = last->next;
            last->next = temp;
        }
    }
    Mergesort(&head);
    print_list(head);
    return 0;
}
