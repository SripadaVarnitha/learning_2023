// to toggle the  the case of each character in a string 
#include <stdio.h>
#include <ctype.h>
void toggleString(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
}

int main() {
    char str[100]; 
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }
    printf("Original string: %s\n", str);
    toggleString(str);
    printf("Toggled string: %s\n", str);
    return 0;
}
