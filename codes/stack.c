#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int stack[SIZE];
int top = -1;

int full(){
    if (top >= SIZE-1){
        printf("Stack is full!");
        return 1;
    }
    return 0;
}
int empty(){
    if (top == -1){
        printf("Stack is empty");
        return 1;
    }
    return 0;
}

void push(int data){
    if (!full()){
        top++;
        stack[top] = data;
    }
}
int pop(){
    if (!empty()){
        return stack[top--];
    }
}

void print(){
    for (int i = 0; i <= top; i++){
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main(){
    push(5);
    print();
    pop();
    push(4);
    push(5);
    push(3);
    pop();
    pop();
    print();
    
    return 0;
}
