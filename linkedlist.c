//This is another version of basic linked list operation using C, it's just for familiarizing myself with C
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//Here defines the node structure which contains the name and his/her phone number
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

    while(scanf("%s", name)){
        if(strcmp(name,"end") == 0) break;
        scanf("%d", &phone);
        //Please create and ask the user insert elements in the linked list
        //and end the input by typing end
        //insetion happens
        
        
        
        
        
    }
	
    printf("\nThe telephone book now has:\n");
    //Please traverse the linkedlist and print it out
    
    
    
    
    
    
    
	return 0;
}
