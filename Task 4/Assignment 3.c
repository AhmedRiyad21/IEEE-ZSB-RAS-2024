#include <stdio.h>

int main() {

    struct test1 {
        char c_id;
        int id;
        char name[50];
    };

    printf("Size of struct test1: %lu bytes\n", sizeof(struct test1));

    struct test2 {
        int id;
        char c_id;
        char name[50];
    };

    printf("Size of struct test2: %lu bytes\n", sizeof(struct test2));

    return 0;
}

