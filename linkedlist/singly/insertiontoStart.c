#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void display(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        if (temp->link != NULL)
            printf("%d->", temp->data);
        else
            printf("%d", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

struct node *insertAtEnd(struct node *temp)
{
    printf("Enter the number to insert ad end:");
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    scanf(" %d", &newnode->data);
    newnode->link = NULL;
    temp->link = newnode;
    temp = newnode;
    return temp;
}

struct node *insertAtHead(struct node *head){
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter the number to be inserted at the beginning of the list:");
    scanf(" %d",&newnode->data);
    newnode->link=head;
    return newnode;
}

int main()
{
    int n, i = 0;
    printf("Enter the size of linked list:");
    scanf(" %d", &n);
    struct node *head = NULL, *temp;
    for (i = 0; i < n; i++)
    {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the items:");
        scanf(" %d", &newnode->data);
        newnode->link = NULL;
        if (head == NULL)
            head = newnode;
        else
            temp->link = newnode;
        temp = newnode;
    }
    temp = insertAtEnd(temp);
    display(head);
    head=insertAtHead(head);
    display(head);
}