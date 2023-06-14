//to write a program for calculator
#include <stdio.h>
int main() {
    float operand1, operand2, result;
    char operator;
    printf("Enter Number1: ");
    scanf("%f", &operand1);
    printf("Enter the operator: ");
    scanf(" %c", &operator); 
    printf("Enter Number2: ");
    scanf("%f", &operand2);

    switch (operator) {
        case '+':
            result = operand1 + operand2;
            printf("addition of %f and %f : %.2f",operand1,operand2,result);
            break;
        case '-':
            result = operand1 - operand2;
            printf("subtraction of %f and %f : %.2f",operand1,operand2,result);
            break;
        case '*':
            result = operand1 * operand2;
            printf("multiplication of %f and %f : %.2f",operand1,operand2,result);
            break;
        case '/':
            if (operand2 != 0) {
                result = operand1 / operand2;
                printf("division of %f and %f : %.2f",operand1,operand2,result);
            } else {
                printf("Error is division by zero is not allowed.\n");
                return 1; 
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1; 
    }        
    return 0;
}
