// Assignment 3_P.1

#include <stdio.h>

int main() {
    char string[100];

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    printf("You entered : %s", string);

    return 0;
}

// Assignment 3_P.2

#include <stdio.h>
#include <stdlib.h>

int main() {
    char string[100];
    int l = 0; 

   
    printf("Input the string: ");

    fgets(string, sizeof string, stdin);

    printf("The characters of the string are:\n");

    while (string[l] != '\0') {
        printf("%c ", string[l]); 
        l++; 
    }

    printf("\n");

}

// Assignment 3_P.3

#include <stdio.h>

int stringcmp(char str1[], char str2[]) {
    int i = 0;

    while (str1[i] == str2[i]) {
        if (str1[i] == '\0' || str2[i] == '\0')
            break;
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0')
        return 0;
    else
        return -1;
}

int main() {
    char str1[100], str2[100];
    int result;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    result = stringcmp(str1, str2);

    if (result == 0)
        printf("The strings are equal.\n");
    else
        printf("The strings are not equal.\n");

    return 0;
}


// Assignment 3_P.4

#include <stdio.h>
#include <string.h>

int main() {
    char string1[1000], string2[1000];
    int i;

    printf("Enter any string: ");
    fgets(string1, sizeof(string1), stdin);
    string1[strcspn(string1, "\n")] = '\0'; 

    for (i = 0; string1[i] != '\0'; i++) {
        string2[i] = string1[i];
    }
    string2[i] = '\0';

    printf("Copied string s2: '%s'\n", string2);

}