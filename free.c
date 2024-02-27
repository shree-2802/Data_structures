#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, sum = 0;
    printf("Enter a number:");
    scanf(" %d", &n);
    int *ptr = (int *)calloc(n, sizeof(short));
    for (i = 0; i < n; i++)
    {
        printf("Enter number %d:", i);
        scanf(" %d", ptr + i);
        sum += *(ptr + i);
    }
    printf("%d\n", sum);
    free(ptr);
    // even after freeing ptr the address will be stored to avoid this situation which is called dangling pointer, we reinitialise it
    ptr = NULL;
}