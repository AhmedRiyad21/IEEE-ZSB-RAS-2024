// Assignment 1 P.1

#include <stdio.h>

int main() {

    int x = 0;
    char c = 'a';
    long long ll = 0LL;

    int *p1 = &x;
    char *p2 = &c;
    long long *p3 = &ll;

    printf("Before increment: p1 = %p, p2 = %p, p3 = %p\n", p1, p2, p3);

    p1++;
    p2++;
    p3++;

    printf("After increment: p1 = %p, p2 = %p, p3 = %p\n", p1, p2, p3);

    return 0;
}

// Reason for this output : It's how the pointer arithmetic works in C as when you increment a pointer so it increments the memory address that is pointed to with the size value of the pointed variable like integer increment by 4 , char by 1 and long long by 8 .

// --------------------------------------------

// Assignment 1 P.2

#include <stdio.h>

int main() {

    int y = 0x123456;
    int *ptr = &y;

    printf("Before operations: *ptr = %x, ptr = %p\n", *ptr, ptr);

    (*ptr)++;

    printf("After *ptr++: *ptr = %x, ptr = %p\n", *ptr, ptr);

    ptr = &y;

    ++(*ptr);

    printf("After *++ptr: *ptr = %x, ptr = %p\n", *ptr, ptr);

    ptr = &y;

    ++ptr;

    printf("After ++*ptr: *ptr = %x, ptr = %p\n", *ptr, ptr);

    return 0;
}

// Reason for this output : First we should know that *ptr holds the value of the pointed variale but ptr holds its memory location . In the first and second operation these expressions *ptr++ , *++ptr increment only the value of the pointed variable (y) by 1 and the pointer value (ptr) is the same but the third expression ++*ptr increments the value of the pointet by the size of integer (4) then the pointer points to another location different than (y) . 