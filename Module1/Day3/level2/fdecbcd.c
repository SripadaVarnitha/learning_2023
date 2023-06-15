//to convert the decimal to BCD format
#include <stdio.h>

#define BCD_MASK 0x0F

void decimalToBCD(int decimal) {
    int ones, tens, bcd;

    ones = decimal % 10;
    tens = decimal / 10;

    bcd = (tens << 4) | (ones & BCD_MASK);

    printf("BCD: %02X\n", bcd);
}

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    decimalToBCD(decimal);

    return 0;
}

