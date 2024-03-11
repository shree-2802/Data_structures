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

int size(struct node *head)
{
    struct node *temp = head;
    int c = 0;
    while (temp != NULL)
    {
        c++;
        temp = temp->link;
    }
    return c;
}

struct node *rev(struct node *head)
{
    struct node *addressholder = NULL;
    int n = size(head);
    struct node *temp;
    for (int i = 0; i < n; i++)
    {
        temp = head;
        head = head->link;
        temp->link = addressholder;
        addressholder = temp;
    }
    return temp;
}
int main()
{
    int n;
    printf("Enter the length of linkedlist:");
    scanf(" %d", &n);
    struct node *head = NULL, *temp;
    for (int i = 0; i < n; i++)
    {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the item:");
        scanf(" %d", &newnode->data);
        newnode->link = NULL;
        if (head == NULL)
            head = newnode;
        else
            temp->link = newnode;
        temp = newnode;
    }
    display(head);
    // printf("head %d",head);
    head = rev(head);
    display(head);
}