#include <stdio.h>
#include <stdlib.h>

// Structure for a node in the linked list
typedef struct Node {
    int data;
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
    newNode->next = *head;
    *head = newNode;
    printf("%d inserted at the beginning.\n", value);
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
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    printf("%d inserted at the end.\n", value);
}

// Function to delete a node by value
void deleteNode(Node** head, int value) {
    if (*head == NULL) {
        printf("List is empty! No node to delete.\n");
        return;
    }

    Node *temp = *head, *prev = NULL;
    
    // If the head node itself holds the key to be deleted
    if (temp != NULL && temp->data == value) {
        *head = temp->next;
        free(temp);
        printf("%d deleted from the list.\n", value);
        return;
    }

    // Search for the key to be deleted
    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    // If the value was not found
    if (temp == NULL) {
        printf("%d not found in the list.\n", value);
        return;
    }

    // Unlink the node and free memory
    prev->next = temp->next;
    free(temp);
    printf("%d deleted from the list.\n", value);
}

// Function to search for a node
void search(Node* head, int value) {
    Node* temp = head;
    int pos = 1;

    while (temp != NULL) {
        if (temp->data == value) {
            printf("%d found at position %d.\n", value, pos);
            return;
        }
        temp = temp->next;
        pos++;
    }
    printf("%d not found in the list.\n", value);
}

// Function to display the linked list
void display(Node* head) {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    printf("Linked List: ");
    Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
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
    int choice, value;

    while (1) {
        printf("\nSingly Linked List Operations:\n");
        printf("1. Insert at Beginning\n2. Insert at End\n3. Delete Node\n4. Search\n5. Display\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert at beginning: ");
                scanf("%d", &value);
                insertAtBeginning(&head, value);
                break;
            case 2:
                printf("Enter value to insert at end: ");
                scanf("%d", &value);
                insertAtEnd(&head, value);
                break;
            case 3:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                deleteNode(&head, value);
                break;
            case 4:
                printf("Enter value to search: ");
                scanf("%d", &value);
                search(head, value);
                break;
            case 5:
                display(head);
                break;
            case 6:
                printf("Exiting program...\n");
                destroyList(&head); // Free memory before exiting
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}

