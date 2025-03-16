#include <stdio.h>

int main()
{

    // Level 1
    int x = 10;
    int *p = &x;
    *p = 20; // now value of x is 20

    printf("value of x: %d\n", x);
    printf("address of x: %p\n", &x);
    printf("addres of p: %p\n", p);
    printf("value of p: %d\n", *p);
    printf("addres of p: %p\n", p + 1);
    printf("value of p: %d\n", *p + 1);

    // LEVEL 2

    int sagar[] = {1, 2, 3, 4, 5};
    int *l = sagar;

    printf("First element: %d\n", *l);
    printf("Second element: %d\n", *(l + 1));
    printf("Third element: %d\n", *(l + 2));
}

// value of x: 20
// address of x: 0x16b5032cc
// addres of p: 0x16b5032cc
// value of p: 20
// addres of p: 0x16b5032d0
// value of p: 21
