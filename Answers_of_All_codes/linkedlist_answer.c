#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node{
	char name[20];
	int phone;
	struct Node*next;
};
typedef struct Node node;

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
    //Please traverse the linkedlist and print it out
    node *test = head;
    while(test){
        printf("%s %d\n", test->name, test->phone);
        test = test->next;
    }
    return 0;
}
