#include <stdlib.h>
#include <stdio.h>

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
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the element to insert at end:");
    scanf(" %d", &newnode->data);
    newnode->link = NULL;
    temp->link = newnode;
    return newnode;
}

struct node *insertAtFront(struct node *head)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the element to insert at front:");
    scanf(" %d", &newnode->data);
    newnode->link = head;
    return newnode;
}

int size(struct node *head)
{
    struct node *temp = head;
    int lengthOflist = 0;
    while (temp != NULL)
    {
        lengthOflist++;
        temp = temp->link;
    }
    printf("length: %d\n", lengthOflist);
    return lengthOflist;
}

void insertAtPost(struct node *head){
    int position;
    struct node *temp=head;
    int s=size(head);
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->link=NULL;
    printf("Enter the data to insert:");
    scanf(" %d",&newnode->data);
    printf("Enter the position between 2 to %d:",s);
    scanf(" %d",&position);
    for(int i=0;i<s;i++){
        if(i==position-2){
            // printf("i=%d temp->link->data %d",i,temp->link->data);
            newnode->link=temp->link;
            temp->link=newnode;
        }
        temp=temp->link;
    }
}

int main()
{
    int n;
    printf("Enter the length of linked list:");
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
    temp = insertAtEnd(temp);
    display(head);
    head = insertAtFront(head);
    display(head);
    insertAtPost(head);
    display(head);
}