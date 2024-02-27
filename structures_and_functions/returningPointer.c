// Returning pointer from a function
#include <stdlib.h>
#include <stdio.h>

struct Points
{
    int x;
    int y;
};

struct Points *pointerReturn(int a, int b)
{
    //since after completeing the function the stack memory will be automatically deallocated we go for heap memory here
    struct Points *ptr = (struct Points *)malloc(sizeof(struct Points));
    ptr->x = a;
    ptr->y = b;
    return ptr;
}

void print(struct Points *ptr)
{
    printf("%d %d\n", ptr->x, ptr->y);
}

int main()
{
    struct Points *ptr1, *ptr2;
    ptr1 = pointerReturn(3, 15);
    ptr2 = pointerReturn(5, 19);
    print(ptr1);
    print(ptr2);
    free(ptr1);
    free(ptr2);
    ptr1 = NULL;
    ptr2 = NULL;
}