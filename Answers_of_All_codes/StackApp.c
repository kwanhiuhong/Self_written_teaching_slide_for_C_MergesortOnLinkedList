#include<stdio.h>
#include<string.h>
#include"stack.h"
int main(){
    char word[100];
    printf("Please input a number: ");
    scanf("%s", word);
    //Here we start using the stack
    int stack_size = (int)strlen(word);
    int stack[stack_size];
    for(int cnt = 0; cnt < stack_size; cnt++){
        push(stack, word[cnt]  -  '0');
    }
    for(int cnt = 0; cnt < stack_size; cnt++){
        printf("%d", pop(stack));
    }
    printf("\n");
    
    return 0;
}
