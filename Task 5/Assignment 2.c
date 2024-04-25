#include <stdio.h>

enum Operation {
    ADD = '+',
    SUBTRACT = '-',
    MULTIPLY = '*',
    DIVIDE = '/',
    AND = '&',
    OR = '|',
    NOT = '!'
};

double calculate(double operand1, double operand2, enum Operation operation) {
    switch(operation) {
        case ADD:
            return operand1 + operand2;
        case SUBTRACT:
            return operand1 - operand2;
        case MULTIPLY:
            return operand1 * operand2;
        case DIVIDE:
            if(operand2 != 0) {
                return operand1 / operand2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 0;
            }
        case AND:
            return (int)operand1 & (int)operand2;
        case OR:
            return (int)operand1 | (int)operand2;
        case NOT:
            return !(int)operand1;
        default:
            printf("Error: Operation not supported.\n");
            return 0;
    }
}

int main() {
    double operand1, operand2;
    char operation;

    printf("Enter operand1, operand2 and operation: ");
    scanf("%lf %lf %c", &operand1, &operand2, &operation);

    printf("Result: %lf\n", calculate(operand1, operand2, (enum Operation)operation));

    return 0;
}

// The size of an enumeration is the size of an int. This is because the C standard specifies that the enumeration constants are of type int. So, the size of the Operation enum is the same as the size of an int, which is 4 bytes on most systems. 
// If we add more members to the enum, the size will still remain the same. This is because the size of the enum is not determined by the number of members it has, but by the underlying type, which is int .