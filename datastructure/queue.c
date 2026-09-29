#include<stdlib.h>
#include<stdio.h>
typedef struct Queue{
    int arr[5];
    int rear;
    int front;
}Queue;
void initilizeQueue(Queue* q){
    q->front = -1;
    q->rear = -1;
}
void enqueue(Queue* q, int data){
    if(q->rear == 5-1){
        printf("The queue is full ! queue overflow");
        return;
    }
    if(q->front == -1){
        q->front = 0;
    }
    q->rear++;
    q->arr[q->rear] = data;
    printf("The queue is enqueued %d",data);
}
int dequeue(Queue* q){
    if(q->front == -1){
        printf("The queue is empty ! queue underflow");
        return -1;
    }
    int temp = q->arr[q->front];
    q->front--;
    return temp;
}
int peek(Queue* q){
   if(q->front == -1){
        printf("The queue is empty ! queue underflow");
        return -1;
    }
    return q->arr[q->front]; 
}
int main(){
    Queue q;
    initilizeQueue(&q);
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    enqueue(&q,40);
    enqueue(&q,50);
    printf("The front elements is \n%d\n ",peek(&q));
    return 0;

}