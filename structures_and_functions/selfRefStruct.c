// self referential structures are those structures in which one or more pointers points to the structure of same type
#include <stdlib.h>

struct selfRefexample
{
    int a;
    char b;
    struct selfRefexample *ptr; //---> this here states that the 3rd part of box contains the address of type selfRefexample therefore this is called self referential structure
};

int main()
{
    struct selfRefexample ptr1 = {1, 'A', NULL}; // this is getting accepted
    struct selfRefexample ptr2;
    // ptr2={2,'B',NULL}; //this is throwing err why>? // assignment operator cannot be used outside initialization or declaration there are 2 waays to solve this one way is to

    ptr2.a = 2;
    ptr2.b = 'B', ptr2.ptr = NULL;
    //    or the other
    ptr2 = (struct selfRefexample){2, 'B', NULL};
    ptr1.ptr=&ptr2;
    //now ptr1's pointer has the address of ptr2
    printf("%d %c",ptr1.ptr->a,ptr1.ptr->b);
}