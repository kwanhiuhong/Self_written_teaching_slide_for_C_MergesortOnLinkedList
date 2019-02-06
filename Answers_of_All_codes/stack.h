#ifndef _STACK_H
#define _STACK_H
#include<stdio.h>
#include<string.h>
#define stack_storage 1000
int stack_size = -1;

void push(int stack[], int user_input);
int pop(int stack[]);
int top(int stack[]);

void push(int stack[], int user_input){
    stack[stack_size+1] = user_input;
    stack_size ++;
}
int pop(int stack[]){
    int x = stack[stack_size];
    stack_size --;
    return x;
}
int top(int stack[]){
    int temp = pop(stack);
    push(stack, temp);
    return temp;
}
#endif
