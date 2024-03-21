// Assignment 2

#include <stdio.h>

int main() {
    int x, y, z;
    int *p, *q, *r;

    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("Enter z: ");
    scanf("%d", &z);

    p = &x;
    q = &y;
    r = &z;

    printf("\nInitial values:\n");
    printf("x: %d, y: %d, z: %d\n", x, y, z);
    printf("p: %p, q: %p, r: %p\n", (void *)p, (void *)q, (void *)r);
    printf("*p: %d, *q: %d, *r: %d\n", *p, *q, *r);

    printf("\nSwapping pointers.\n");
    int *temp = r;
    r = p;
    p = q;
    q = temp;

    printf("\nUpdated values:\n");
    printf("x: %d, y: %d, z: %d\n", x, y, z);
    printf("p: %p, q: %p, r: %p\n", (void *)p, (void *)q, (void *)r);
    printf("*p: %d, *q: %d, *r: %d\n", *p, *q, *r);

    return 0;
}