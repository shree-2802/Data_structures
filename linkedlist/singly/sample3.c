#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *ptr;
};

int main(){
    struct node *head=(struct node*)malloc(sizeof(struct node));
    head->data=11;
    head->ptr=NULL;
    struct node *current=(struct node*)malloc(sizeof(struct node));
    current->data=22;
    current->ptr=NULL;
    head->ptr=current;
    current=(struct node*)malloc(sizeof(struct node));
    current->data=33;
    current->ptr=NULL;
    head->ptr->ptr=current;
    printf("%d %d %d",head->data,head->ptr->data,head->ptr->ptr->data);
}