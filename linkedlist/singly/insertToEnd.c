#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void display(struct node *head)
{
    printf("\nThis is the linkedList you created\n");
    struct node *temp = head;
    while (temp != NULL)
    {
        if (temp->link != NULL)
            printf("%d->", temp->data);
        else
            printf("%d", temp->data);
        temp = temp->link;
    }
}
int main()
{
    int n;
    printf("Enter no. of items to add in linked list:");
    scanf("%d", &n);
    struct node *head = NULL, *temp;
    for (int i = 0; i < n; i++)
    {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the element:");
        scanf("%d", &newnode->data);
        newnode->link = NULL;
        if (head == NULL)
            head = newnode;
        else
            temp->link = newnode;
        temp = newnode;
    }
    display(head);
    char choice;
    printf("\nDo you wnat to add elements to the end of the list?(y/n): ");
    scanf(" %c", &choice);
    if (choice == 'y')
    {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the item to insert at end:");
        scanf("%d", &newnode->data);
        temp = head;
        while (temp->link != NULL)
        {
            temp = temp->link;
        }
        temp->link = newnode;
        newnode->link = NULL;
    }
    display(head);
}