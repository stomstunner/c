#include<stdlib.h>
#include<stdio.h>
typedef struct {
    int arr[5];
    int top;
}Stack;
void push(Stack *s, int data){
    if(s->top == 5 -1){
        printf("The stack is full : Overflow");
        return;
    }
    s->top++;
    s->arr[s->top] = data;
    printf("%d is pushed ",data);
}
int pop(Stack *s){
    if(s->top == -1){
        printf("the stack is empty : Underflow");
        return -1;
    }
    int temp = s->arr[s->top];
    s->top--;
    printf("%d is popped from the stack",temp);
    return temp;
}
int peek(Stack *s){
    if(s->top == -1){
       printf("the stack is empty : Underflow");
        return -1; 
    }
    return s->arr[s->top];
}
int main(){
    Stack s;
    s.top = -1;
    push(&s,40);
    push(&s,50);
    push(&s,60);
    push(&s,70);
    printf("the topmost element is %d",peek(&s));
}