#include<stdio.h>
#include<string.h>
#define stack_storage 1000
int stack_size = -1;

void push(int stack[], int user_input);
int pop(int stack[]);
int top(int stack[]);

int main(){
    int stack[stack_storage];
    for(int cnt = 0; cnt < stack_size; cnt++) stack[cnt] = 0;
    char command[5];
    int input;
    printf("Please push/pop/top the stack and end the input by typing 'end'\n");
    do{
        scanf("%s", command);
        if(strcmp(command, "end") == 0){
            break;
        }
        if(strcmp(command, "push") == 0){
            if(stack_size == stack_storage-1){
                printf("Stack overflows!\n");
                break;
            }
            printf("The value that you want to push:");
            scanf("%d", &input);
            push(stack, input);
        }else if(strcmp(command, "pop") == 0){
            pop(stack);
            if(stack_size == -1){
                printf("Stack underflows!\n");
                return 0;
            }
        }else if(strcmp(command, "top") == 0){
            printf("%d\n", top(stack));
        }
    }while(strcmp(command, "end"));
    
    printf("\nThe stack now contains the following\n");
    for(int count = 0; count <= stack_size; count++){
        printf("%d ", stack[count]);
    }
    printf("\n");
    return 0;
}

void push(int stack[], int user_input){
    //please type in your code
    
    
    
}
int pop(int stack[]){
    //please type in your code

    
    
}
int top(int stack[]){
    //please type in your code

    
    
}
