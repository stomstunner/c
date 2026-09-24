#include <stdio.h>
#include <stdlib.h>

struct slist
{
    int data;
    struct slist *next;
};

typedef struct slist node;
node *head = NULL;

void create()
{
    node *newnode, *temp;
    int data;
    printf("Enter the data = ");
    scanf("%d", &data);
    newnode = (node *)malloc(sizeof(node));
    newnode->data = data;
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode; // Fix the assignment here
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void display()
{
    node *temp = head;
    if (temp == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void finsert()
{
    node *tmp;
    tmp = (node *)malloc(sizeof(node));
    printf("\nEnter Number: ");
    scanf("%d", &tmp->data);
    tmp->next = head;
    head = tmp;
    printf("Node Inserted at First Position\n");
}

void linsert()
{
    node *tmp, *tmp1;
    tmp = (node *)malloc(sizeof(node));
    printf("Enter Number to insert at last position: ");
    scanf("%d", &tmp->data);
    tmp->next = NULL; // End of list

    if (head == NULL)
    {
        // If the list is empty, the new node becomes the head
        head = tmp;
    }
    else
    {
        tmp1 = head;
        while (tmp1->next != NULL)
        {
            tmp1 = tmp1->next;
        }
        tmp1->next = tmp; // Link the new node at the last position
    }

    printf("Node inserted at the last position\n");
}

int main()
{
    int choice;
    while (1)
    {
        printf("\n1--> Create\n2--> Display\n3--> Insert at First\n4--> Insert at the Last position\n5---> Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice); // Read user's choice

        if (choice == 1)
        {
            create();
        }
        else if (choice == 2)
        {
            display();
        }
        else if (choice == 3)
        {
            finsert();
        }
        else if (choice == 4)
        {
            linsert();
        }
        else if (choice == 5)
        {
            break;
        }
        else
        {
            printf("Wrong choice. Please try again.\n");
        }
    }

    return 0;
}