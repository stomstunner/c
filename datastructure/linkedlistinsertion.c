#include<stdlib.h>
#include<stdio.h>
typedef struct Node{
    int data;
    struct Node* next;
}Node;
Node* createNode(int value){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}
void insertAtHead(Node** head,int value){
    Node* newNode = createNode(value);
    newNode->next = *head;
    *head = newNode;
}
void insertAtEnd(Node** head, int value){
    Node* newNode = createNode(value);
    if(*head == NULL) {
        *head = newNode;
        return;
    }
    Node* temp = *head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}
void insertAtIDX(Node** head, int pos, int value){
    Node* newNode = createNode(value);
    if(pos == 0){
        insertAtHead(head,value);
        return;
    }
    Node* temp = *head;
    for(int i =0;i< pos-1;i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main(){
    Node* head = NULL;
    insertAtHead(&head,10);
    insertAtEnd(&head,20);
    insertAtEnd(&head,30);
    insertAtEnd(&head,40);
    insertAtEnd(&head,60);
    insertAtIDX(&head,4,50);
    display(head);
    return 0;
}