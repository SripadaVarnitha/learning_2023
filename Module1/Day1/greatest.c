//to find greatest among three numbers
#include <stdio.h>
int Greatest(int operand1, int operand2, int operand3) {
    if (operand1 >= operand2 && operand1 >= operand3) { 
        return operand1;
    } else if (operand2 >= operand1 && operand2 >= operand3) {
        return operand2;
    } else {
        return operand3;
    }
}
int main() {
    int operand1, operand2, operand3;   
    printf("Enter three numbers: ");
    scanf("%d %d %d", &operand1, &operand2, &operand3);
    int Findgreatest = Greatest(operand1, operand2, operand3);
    printf("The greatest number is: %d\n", Findgreatest);
    return 0;
}
