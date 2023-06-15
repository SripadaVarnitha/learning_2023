//to encode and decode the given string
#include <stdio.h>
#include <string.h>
void encodeString(char* string) {
    int length = strlen(string);
    for (int i = 0; i < length; i++) {
        string[i] = string[i] + 1;
    }
}

void decodeString(char* string) {
    int length = strlen(string);
    for (int i = 0; i < length; i++) {
        string[i] = string[i] - 1;
    }
}

int main() {
    char originalString[256];

    printf("Enter a string: ");
    fgets(originalString, sizeof(originalString), stdin);
    originalString[strcspn(originalString, "\n")] = '\0';  
    printf("Original String: %s\n", originalString);
    encodeString(originalString);
    printf("Encoded String: %s\n", originalString);
    decodeString(originalString);
    printf("Decoded String: %s\n", originalString);

    return 0;
}
