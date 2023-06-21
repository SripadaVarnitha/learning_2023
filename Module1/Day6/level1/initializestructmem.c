//to initialize all members in the array of structures
#include <stdio.h>
#include <string.h>
struct Student {
    int rollno;
    char name[20];
    float marks;
};
void initializeArray(struct Student *arr, int size, const char *input) {
    int i = 0;
    while (sscanf(input, "%d %19s %f", &(arr[i].rollno), arr[i].name, &(arr[i].marks)) == 3) {
        input = strchr(input, '\n');
        if (input == NULL)
            break;
        input++;
        i++;
    }
}

int main() {
    const char *input = "1001 Aron 100.00\n1002 Bob 90.50\n1003";
    int size = 2;
    struct Student arr[size];
    initializeArray(arr, size, input);
    for (int i = 0; i < size; i++) {
        printf("Student %d:\nRoll No: %d\nName: %s\nMarks: %.2f\n\n", i + 1, arr[i].rollno, arr[i].name, arr[i].marks);
    }
    return 0;
}