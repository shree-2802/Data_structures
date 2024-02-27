#include <stdio.h>
#include <malloc.h>

int main()
{
    int *ptr = (int *)malloc(sizeof(int));
    printf("%d\n", ptr);
    free(ptr);
    printf("%d after free\n", ptr);
    // here the ptr is still holding a non existing memory location this is called dangling pointer
    ptr = NULL;
    // now ptr is reinitialised
    // print("%d after reinitialising", ptr);
    return 0;
    // dangling -loosely
}