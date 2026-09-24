#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node* left;
    struct Node* right;
}Node;
void display(Node* root){
    if(root == NULL) return;
    printf("%d -> ",root->data);
    display(root->left);
    display(root->right);
}
int main(){

    Node* a = (Node*)malloc(sizeof(Node));
    Node* b = (Node*)malloc(sizeof(Node));
    Node* c = (Node*)malloc(sizeof(Node));
    Node* d = (Node*)malloc(sizeof(Node));
    Node* e = (Node*)malloc(sizeof(Node));
    Node* f = (Node*)malloc(sizeof(Node));
    a->data = 10;
    b->data= 20;
    c->data = 30;
    d->data= 40;
    e->data = 50;
    f->data= 60;

    a->left = b;
    a->right = c;

    b->left = d;
    b->right = e;

    c->left = f;
    c->right = NULL;

    d->left = NULL;
    d->right = NULL;

    e->left = NULL;
    e->right = NULL;

    f->left = NULL;
    f->right = NULL;

    display(a);
    
    return 0;
}