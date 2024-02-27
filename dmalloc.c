#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    printf("enter a number\n");
    scanf("%d", &n);
    int *ptr = (int *)malloc(n * sizeof(short));
    if (ptr == NULL)
    {
        printf("No memory allocated");
        exit(1);
    }
    else
    {

        printf("enter %d numbers:\n", n);
        for (i = 0; i < n; i++)
        {
            printf("enter %d numbers:", i);
            scanf("%d", ptr + i);
        }
        for (i = 0; i < n; i++)
        {
            printf("%d ", (ptr + i));
        }
    }
    return 0;
}