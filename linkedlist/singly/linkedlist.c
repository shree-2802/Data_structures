#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *ptr;
};
int main()
{
    int n;
    printf("Enter the number of elements in linked list:");
    scanf("%d", &n);
    struct node *head = NULL, *prev;
    for (int i = 0; i < n; i++)
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        printf("Enter data to insert:");
        scanf("%d", &temp->data);
        temp->ptr = NULL;
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            prev->ptr = temp;
        }
        prev = temp;
    }
    prev = head;
    for (int i = 0; i < n; i++)
    {
        if (prev->ptr != NULL)
            printf("%d->", prev->data);
        else
            printf("%d", prev->data);
        prev = prev->ptr;
    }
}