#include <stdio.h>
#include <stdlib.h>

// Structure for a node in the doubly linked list
typedef struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
} Node;

// Function to insert a node at the beginning
void insertAtBeginning(Node** head, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = *head;

    if (*head != NULL) {
        (*head)->prev = newNode;
    }
    
    *head = newNode;
}

// Function to insert a node at the end
void insertAtEnd(Node** head, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL) {
        newNode->prev = NULL;
        *head = newNode;
        return;
    }

    Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}

// Function to delete a node by value
void deleteNode(Node** head, int value) {
    if (*head == NULL) {
        printf("List is empty! No node to delete.\n");
        return;
    }

    Node* temp = *head;

    // If the node to be deleted is the head node
    if (temp->data == value) {
        *head = temp->next;
        if (*head != NULL) {
            (*head)->prev = NULL;
        }
        free(temp);
        return;
    }

    // Search for the node to be deleted
    while (temp != NULL && temp->data != value) {
        temp = temp->next;
    }

    // If the value was not found
    if (temp == NULL) {
        printf("Value %d not found in the list.\n", value);
        return;
    }

    // Unlink the node from the list
    temp->prev->next = temp->next;
    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }
    free(temp);
}

// Function to display the linked list from the beginning
void displayForward(Node* head) {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    printf("Doubly Linked List (Forward): ");
    Node* temp = head;
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to display the linked list from the end
void displayBackward(Node* head) {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    // Move to the last node
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    printf("Doubly Linked List (Backward): ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");
}

// Function to free all nodes before exiting
void destroyList(Node** head) {
    Node* temp;
    while (*head != NULL) {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}

int main() {
    Node* head = NULL;

    // Insert elements
    insertAtBeginning(&head, 30);
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 10);
    insertAtEnd(&head, 40);
    insertAtEnd(&head, 50);

    // Display the linked list
    printf("After inserting elements:\n");
    displayForward(head);
    displayBackward(head);

    // Delete an element
    deleteNode(&head, 30);
    printf("After deleting 30:\n");
    displayForward(head);
    displayBackward(head);

    // Free memory before exiting
    destroyList(&head);

    return 0;
}
