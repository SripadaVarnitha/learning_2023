// to write a function to find the chracter type
#include <stdio.h>
#include <ctype.h>
int findCharType(char ch) {
    if (isalpha(ch)) {
        if (isupper(ch)) {
            printf("Uppercase Alphabet\n");
            return 1; 
        } else {
             printf("Lowercase Alphabet\n");
            return 2;
        }
    } else if (isdigit(ch)) {
        printf("Digit\n");
        return 3;
    } else if (isprint(ch)) {
        printf("Printable symbol\n");
        return 4; 
    } else {
        printf("Non-printable Symbol\n");
        return 5; 
    }
}

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    int result = findCharType(ch);
    return 0;
}