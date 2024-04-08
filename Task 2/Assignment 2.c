// Assignment 2 P.1

#include <stdio.h>

void increment_int(int *i) {
    (*i)++;
}

int main() {

    int x = 0;

    void (*function_pointer)(int*);

    function_pointer = &increment_int;

    printf("Before increment: %d\n", x);

    function_pointer(&x);

    printf("After increment: %d\n", x);

    return 0;
}


// Assignment 2 P.2

#include <stdio.h>

int main() {

    int array[] = {1, 5, 9, 3, 8}; 

    int *pointer = array; 

    printf("The elements of the array :\n");

    for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++) {
        printf("%d ", *(pointer + i));
    }

    return 0;
}
