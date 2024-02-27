#include <stdlib.h>
#include <stdio.h>

struct points
{
    int x;
    int y;
};
void get(struct points *p)
{
    printf("p");
    scanf("%d %d", &p->x, &p->y);
    return;
}
int main()
{
    struct points p1;
    struct points p2;
    get(&p1);
    get(&p2);
    printf("%d %d ", p1.x, p1.y);
    printf("%d %d ", p2.x, p2.y);
}