#include <stdio.h>
#include <stdlib.h>

struct charset
{
    char ch;
    int code;
};
int get(char *c, int *code)
{
    scanf("%c %d", c, code);
}
int main()
{
    struct charset c;
    get(&c.ch, &c.code);
    printf("%c %d\n", c.ch, c.code);
}