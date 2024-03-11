//linked list is made up of nodes made up od data and link data containes data and link containes te address
#include <stdio.h>
#include <stdlib.h>

struct node{
    int a;
    struct node *ptr;
};

int main(){
    struct node *head=(struct node*)malloc(sizeof(struct node));
    head->a=45;
    head->ptr=NULL;
    printf("%d",head->a);
}