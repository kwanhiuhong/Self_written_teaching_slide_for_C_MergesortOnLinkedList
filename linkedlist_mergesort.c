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
    //Part 1. Get the size of the list
    
    
    
    
    return cnt;
}
node* Merge(node **head1, node **head2){
    node *new_head = NULL;
    //Part 3, Merge two linked list
    
    
    
    
    
    
    
    return new_head;
}
void Mergesort(node **head){
    if((*head)->next != NULL){
        //Part 2, do the mergesort
        
        
        
        
        
        
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
