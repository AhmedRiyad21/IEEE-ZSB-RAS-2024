// P.1
#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr1; 
    int* ptr2; 
    int* ptr3; 

    ptr1 = (int*)malloc(5 * sizeof(int));
    if (ptr1 == NULL) {
        printf("Memory allocation using malloc failed.\n");
        return 1;
    }
    printf("Memory successfully allocated using malloc.\n");

    for (int i = 0; i < 5; ++i) {
        ptr1[i] = i + 1;
    }

    ptr2 = (int*)calloc(3, sizeof(int));
    if (ptr2 == NULL) {
        printf("Memory allocation using calloc failed.\n");
        free(ptr1);
        return 1;
    }
    printf("Memory successfully allocated using calloc.\n");

    for (int i = 0; i < 3; ++i) {
        ptr2[i] = 2 * (i + 1);
    }

    ptr3 = (int*)realloc(ptr1, 8 * sizeof(int));
    if (ptr3 == NULL) {
        printf("Memory reallocation using realloc failed.\n");
        free(ptr1); 
        free(ptr2);
        return 1;
    }
    printf("Memory successfully reallocated using realloc.\n");

    printf("Values in ptr1 (malloc-allocated):\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", ptr3[i]);
    }
    printf("\n");

    printf("Values in ptr2 (calloc-allocated):\n");
    for (int i = 0; i < 3; ++i) {
        printf("%d ", ptr2[i]);
    }
    printf("\n");

    free(ptr3);
    free(ptr2);

    return 0;
}

// P.2
#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr1; 
    int* ptr2; 
    int* ptr3;
    int* ptr4; 

    ptr1 = (int*)malloc(5 * sizeof(int));
    if (ptr1 == NULL) {
        printf("Memory allocation using malloc failed.\n");
        return 1;
    }
    printf("Memory successfully allocated using malloc.\n");

    for (int i = 0; i < 5; ++i) {
        ptr1[i] = i + 1;
    }

    ptr2 = (int*)calloc(3, sizeof(int));
    if (ptr2 == NULL) {
        printf("Memory allocation using calloc failed.\n");
        free(ptr1); // Free previously allocated memory
        return 1;
    }
    printf("Memory successfully allocated using calloc.\n");

    for (int i = 0; i < 3; ++i) {
        ptr2[i] = 2 * (i + 1);
    }

    free(ptr1);
    printf("Memory freed for ptr1.\n");

    ptr4 = (int*)malloc(8 * sizeof(int));
    if (ptr4 == NULL) {
        printf("Memory allocation for ptr4 failed.\n");
        free(ptr2);
        return 1;
    }
    printf("Memory successfully allocated for ptr4.\n");

    for (int i = 0; i < 8; ++i) {
        ptr4[i] = 3 * (i + 1);
    }

    printf("Values in ptr2 (calloc-allocated):\n");
    for (int i = 0; i < 3; ++i) {
        printf("%d ", ptr2[i]);
    }
    printf("\n");

    printf("Values in ptr4 (newly allocated):\n");
    for (int i = 0; i < 8; ++i) {
        printf("%d ", ptr4[i]);
    }
    printf("\n");

    free(ptr2);
    free(ptr4);

    return 0;
}
// P.3
#include <stdio.h>
#include <ctype.h>

#define max_length 100

int main() {
char name[max_length];
int charfreq[26] = {0};
int maxfrequency = 0;

printf("Enter a name (maximum %d characters): ", max_length);
if (!fgets(name, sizeof(name), stdin)) {
printf("Error reading input.\n");
return 1;
}

size_t len = strlen(name);
if (name[len - 1] == '\n') {
name[len - 1] = '\0';
len--;
}

for (size_t i = 0; i < len; i++) {
if (isalpha((unsigned char)name[i])) {
charfreq[tolower((unsigned char)name[i]) - 'a']++;
}
}

for (int i = 0; i < 26; i++) {
if (charfreq[i] > maxfrequency) {
maxfrequency = charfreq[i];
}
}

printf("Entered name: %s\n", name);

// Print the most repeated character(s)
printf("Most repeated character(s): ");
for (int i = 0; i < 26; i++) {
if (charfreq[i] == maxfrequency) {
printf("%c ", 'a' + i);
}
}
printf("(repeated %d times)\n", maxfrequency);

return 0;
}
