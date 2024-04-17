#include <stdio.h>

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main() {

    double number1, number2;
    int choice;
    double (*operation)(double, double);  

    printf("Enter two numbers: ");
    scanf("%lf %lf", &number1, &number2);

    printf("Choose an operation:\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            operation = add;
            break;
        case 2:
            operation = subtract;
            break;
        case 3:
            operation = multiply;
            break;
        case 4:
            operation = divide;
            break;
        default:
            printf("Invalid choice!\n");
            return 0;
    }

    double result = operation(number1, number2);  
    printf("Result: %.2lf\n", result);

    return 0;
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if(b != 0)
        return a / b;
    else {
        printf("Error! Division by zero is not allowed.\n");
        return 0;
    }
}
