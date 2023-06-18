//to print the decimal to binary/octal/hex conversion
#include <stdio.h>
void decimalToBinary(int num) {
    int binary[32];
    int i = 0;
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }
    printf("Binary: ");
    if (i == 0) {
        printf("0");
    } else {
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", binary[j]);
        }
    }
    printf("\n");
}

void decimalToOctal(int num) {
    int octal[32];
    int i = 0;
    while (num > 0) {
        octal[i] = num % 8;
        num = num / 8;
        i++;
    }
    printf("Octal: ");
    if (i == 0) {
        printf("0");
    } else {
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", octal[j]);
        }
    }
    printf("\n");
}

void decimalToHexadecimal(int num) {
    char hexadecimal[32];
    int i = 0;
    while (num > 0) {
        int remainder = num % 16;
        if (remainder < 10) {
            hexadecimal[i] = remainder + '0';
        } else {
            hexadecimal[i] = remainder - 10 + 'A';
        }
        num = num / 16;
        i++;
    }
    printf("Hexadecimal: ");
    if (i == 0) {
        printf("0");
    } else {
        for (int j = i - 1; j >= 0; j--) {
            printf("%c", hexadecimal[j]);
        }
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    decimalToBinary(num);
    decimalToOctal(num);
    decimalToHexadecimal(num);
    return 0;
}
