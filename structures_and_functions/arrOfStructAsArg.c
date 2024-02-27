// Passing array of a structure as argument
#include <stdio.h>
#include <stdlib.h>

struct charset
{
    int num;
    char ch;
};
void print(struct charset arr[])
{
    // here array is a pointer to the first element of the array and not the array itself

    int size = sizeof(arr) / sizeof(struct charset);
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d %c\n", arr[i].num, arr[i].ch);
    }
}
int main()
{
    struct charset arr[2] = {{1, 'A'}, {2, 'B'}};
    print(arr);
}