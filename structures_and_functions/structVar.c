// Returning structure variable from a function.

#include <stdlib.h>
#include <stdio.h>

struct Points
{
    int x;
    int y;
};

struct Points edit(struct Points p)
{
    p.x++;
    p.y += p.x;
    return p;
}

void increaseBy10(struct Points *p)
{
    p->x += 10;
    p->y += 10;
}

void print(struct Points *p)
{
    printf(" %d %d",p->x,p->y);
}

int main()
{
    struct Points p1 = {20, 26};
    struct Points p2 = {30, 35};
    p1 = edit(p1);
    p2 = edit(p2);
    increaseBy10(&p1);
    increaseBy10(&p2);
    print(&p1);
    print(&p2);
}