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

struct node *deletepos(struct node *head)
{
    int pos;
    int n = size(head);
    printf("enter the position of the ele to delete:");
    scanf(" %d", &pos);
    struct node *temp = head;
    for (int i = 0; i < n && temp!=NULL; i++)
    {
        if (pos == 1)
        {
            struct node *temphead=head;
            head = head->link;
            free(temphead);
            temphead=NULL;
            return head;
        }
        else if (i == pos - 2)
        {
            struct node *tempval = temp->link;
            temp->link = temp->link->link;
            free(tempval);
            tempval = NULL;
        }
        temp = temp->link;
    }
    return head;
}

int main()
{
    int n;
    printf("Enter the length of linked list:");
    scanf("%d", &n);
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
    head = deletepos(head);
    display(head);
}