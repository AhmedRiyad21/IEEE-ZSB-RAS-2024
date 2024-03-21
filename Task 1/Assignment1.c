// Assignment 1_P.1

#include <stdio.h>

int duplicates(int array[], int length) {
    int i, j, count = 0;

    for (i = 0; i < length; i++) {
        for (j = i + 1; j < length; j++) {
            if (array[i] == array[j]) {
                count++;
                break;
            }
        }
    }

    return count;
}

int main() {
    int array[100], i, length, count = 0;

    printf("Enter number of elements in array : ");
    scanf("%d", &length);

    printf("Enter %d elements : ", length);
    for (i = 0; i < length; i++) {
        scanf("%d", &array[i]);
    }

    count = duplicates(array, length);
    printf("\nTotal number of duplicate elements in this Array: %d", count);

    return 0;
}

// Assignment 1_P.2

#include <stdio.h>

int main() {
    int array1[100], array2[100];
    int size, i, j, count ;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements in array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &array1[i]);
        array2[i] = 1;
    }

    for (i = 0; i < size; i++) {
        count = 0; 
        for (j = 0; j < size; j++) {
            if (array1[i] == array1[j]) {
                count++;
            }
        }
        if (count > 1) {
            array2[i] = 0; 
        }
    }

    printf("Unique elements in the array: ");
    for (i = 0; i < size; i++) {
        if (array2[i] == 1) {
            printf("%d ", array1[i]);
        }
    }

    return 0;
}

// Assignment 1_P.3

#include <stdio.h>

void frequency(int arr[], int size) {
    int freq[size];
    int i, j, count;

    for (i = 0; i < size; i++) {
        freq[i] = -1;
    }

    for (i = 0; i < size; i++) {
        count = 1;
        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0) {
            freq[i] = count;
        }
    }

    printf("\nFrequency of each element :\n");
    for (i = 0; i < size; i++) {
        if (freq[i] != 0) {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }
}

int main() {
    int size;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements of the array: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    frequency(arr, size);

    return 0;
}

// Assignment 1_P.4

#include <stdio.h>

void add(int *Num1, int *Num2) {
    *Num1 = *Num1 + *Num2;
}

int main() {

    int num1, num2;

    printf("Enter the 1st number: ");
    scanf("%d", &num1);

    printf("Enter the 2nd number: ");
    scanf("%d", &num2);

    add(&num1, &num2);

    printf("Sum of %d and %d is %d\n", num1 - num2, num2, num1);

    return 0;
}



