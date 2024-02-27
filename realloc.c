#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    printf("Enter the number of elements to be inserted:");
    scanf("%d", &n);
    int *ptr = (int *)calloc(n, sizeof(short));
    printf("Enter %d elements to be inserted\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("enter element %d:", i + 1);
        scanf("%d", ptr + i);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
    char res;
    printf("\nDo you want to insert more numbers? (y/n):");
    scanf(" %c", &res);
    if (res == 'y')
    {
        int reall;
        printf("\nEnter the number of elements you want to insert:");
        scanf(" %d", &reall);
        ptr = realloc(ptr, reall * sizeof(short));
        printf("Enter %d elements to be inserted\n", reall);
        for (int i = 0; i < reall; i++)
        {
            printf("enter element %d:", i + 1);
            scanf("%d", ptr + n + i);
        }
        for (int i = 0; i < n + reall; i++)
        {
            printf("%d ", *(ptr + i));
        }
        printf("\n");
    }
    else
    {
        printf("Happy end\n");
    }
}