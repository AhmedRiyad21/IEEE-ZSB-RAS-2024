#include <stdio.h>

#define add(a, b) ((a) + (b))
#define subtract(a, b) ((a) - (b))
#define multiply(a, b) ((a) * (b))
#define divide(a, b) ((b) != 0 ? (a) / (b) : printf("Error! Division by zero is not allowed.\n"))

int main() {
    double num1, num2, result;
    int choice;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    printf("Choose an operation:\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            result = add(num1, num2);
            break;
        case 2:
            result = subtract(num1, num2);
            break;
        case 3:
            result = multiply(num1, num2);
            break;
        case 4:
            result = divide(num1, num2);
            break;
        default:
            printf("Invalid choice!\n");
            return 0;
    }

    printf("Result: %.2lf\n", result);

    return 0;
}

// First the if-else statement is used to control the flow of the program by checking a certain condition of the program then based on it run the program but the condition is checked during the execution of the program so it's runtime constructs .
// But , the conditional compilation directives are used to choose the parts of the program that will be compiled as the condition is checked during the compilation process so it's compile time constructs . so if-else statements control what code is executed, while conditional compilation directives control what code is compiled . Both serve different purposes and used in different problems. 