#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node{
	char name[20];
	int phone;
	struct Node*next;
};
typedef struct Node node;
void printlist(node *head){
    node *test = head;
    while(test){
        printf("%s %d\n", test->name, test->phone);
        test = test->next;
    }
}
//Please add a function to reverse the list




int main(){
    char name[20];
    int phone;
    node *head = NULL;

    while(scanf("%s", name)){
        if (strcmp(name,"end") == 0) break;
        scanf("%d", &phone);
        //the following do the insertion at the end
        node *temp = (node*)malloc(sizeof(node));
        strcpy(temp->name, name);
        temp->phone = phone;
        if (head==NULL) head = temp;
        else{
            node *last = head;
            while(last->next) last = last->next;
            last->next = temp;
        }
    }
    printf("\nThe telephone book now has:\n");
    printlist(head);
    //Reverse the link and print it out again
    reverseList( &head )
    printf("The reverse list is:\n");
    printlist(head);
    return 0;
}
