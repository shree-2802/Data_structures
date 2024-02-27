#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[50];
    int age;
    int rollNo;
    float marks;
};
void print(struct student s1)
{
    printf("%s %d %d %.2f\n", s1.name, s1.age, s1.rollNo, s1.marks);
}
int main()
{
    int n, i;
    struct student s1 = {"Shivan", 20, 33, 100};
    print(s1);
}