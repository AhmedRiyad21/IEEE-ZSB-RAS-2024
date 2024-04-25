// P.1

#include <stdio.h>
#define ASCENDING_SORT
void getValues(int arr[], int size) {
    printf("Enter %d integers: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}
void sortAscending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void sortDescending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    getValues(arr, size);
#ifdef ASCENDING_SORT
    sortAscending(arr, size);
    printf("Sorted array in ascending order: ");
#elif defined(DESCENDING_SORT)
    sortDescending(arr, size);
    printf("Sorted array in descending order: ");
#else
    printf("No sorting option defined.\n");
    return 0;
#endif
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

// P.2

#include <stdio.h>

#define ADD(x, y) ((x) + (y))
#define SUBTRACT(x, y) ((x) - (y))

int main() {
    int num1, num2, result;
    char operator;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter operator (+ or -): ");
    scanf(" %c", &operator);

    if (operator == '+') {
        result = ADD(num1, num2);
        printf("Result of addition: %d\n", result);
    } else if (operator == '-') {
        result = SUBTRACT(num1, num2);
        printf("Result of subtraction: %d\n", result);
    } else {
        printf("Invalid operator!\n");
    }

    return 0;
}