//to find the biggest number //
#include<stdio.h>
//with ifelse
int biggest(int num1, int num2) {
    if(num1 >= num2) {
        return num1;
    }
    else {
        return num2;
    }
}
//with ternary
int Ternary(int num1, int num2) {
    int biggest = (num1 > num2) ? num1 : num2;
    return biggest;
}
int main() {
    int num1, num2;
    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);
    int max = biggest(num1, num2);
    printf("The biggest number is: %d\n", max);
    int maxTernary = Ternary(num1, num2);
    printf("The biggest number using ternary operator is: %d\n", maxTernary);
    return 0;
}
