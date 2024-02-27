#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    printf("Enter number of elements to be inserted: ");
    scanf("%d", &n);
    int *ptr = (int *)calloc(n, sizeof(short));
    printf("%d", (int *)calloc(0, sizeof(short)));
    if (ptr == NULL)
    {
        printf("No m allocated");
        exit(1);
    }
    printf("\nEnter the %d elements\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter element number %d:", i + 1);
        scanf("%d", ptr + i);
    }
    for (int i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
}