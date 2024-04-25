// P.1
#include <stdio.h>

struct student_info {
    unsigned int roll_number : 4;
    unsigned int age : 8;
    unsigned int marks : 3;
    char address[16];
    char name[16];
};
void print_student_info(struct student_info* student) {
    printf("Roll Number: %u\n", student->roll_number);
    printf("Age: %u\n", student->age);
    printf("Marks: %u\n", student->marks);
    printf("Address: %s\n", student->address);
    printf("Name: %s\n", student->name);
    printf("\n");
}
int main() {
    struct student_info students[15];
    for (int i = 0; i < 15; i++) {
        students[i].roll_number = i + 1;
        students[i].age = 18 + i;
        students[i].marks = i % 8;
        sprintf(students[i].address, "Address %d", i);
        sprintf(students[i].name, "Student %d", i);
    }
    for (int i = 0; i < 15; i++) {
        print_student_info(&students[i]);
    }
    printf("Size of struct student_info: %zu bytes\n", sizeof(struct student_info));

    return 0;
}

// P.2

#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;

Complex add(Complex n1, Complex n2) {
    Complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return temp;
}

int main() {
    Complex n1, n2, result;

    printf("For the 1st complex number:\n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n1.real, &n1.imag);

    printf("\nFor the 2nd complex number:\n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n2.real, &n2.imag);

    result = add(n1, n2);
    printf("Sum = %.1f + %.1fi\n", result.real, result.imag);

    return 0;
}

// P.3

#include <stdio.h>

typedef unsigned char Byte;
typedef unsigned short Word;
typedef unsigned int SWord;
typedef unsigned long LWord;

int main() {
    printf("Size of Byte: %lu bytes\n", sizeof(Byte));
    printf("Size of Word: %lu bytes\n", sizeof(Word));
    printf("Size of DWord: %lu bytes\n", sizeof(SWord));
    printf("Size of QWord: %lu bytes\n", sizeof(LWord));

    return 0;
}