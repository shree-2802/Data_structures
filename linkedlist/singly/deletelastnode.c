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
    while(temp!=NULL){
        if(temp->link!=NULL)
         printf("%d->",temp->data);
        else
         printf("%d",temp->data);
        temp=temp->link;
    }
    printf("\n");
}
void deleteLastnode(struct node *head){
    struct node *temp=head;
    while(temp->link->link!=NULL){
        temp=temp->link;
    }
    free(temp->link);
    temp->link=NULL;
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
    deleteLastnode(head);
    display(head);
}