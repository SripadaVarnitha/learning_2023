//to write a function to parse the string and initialize an array of structures
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
    int rollno;
    char name[20];
    float marks;
};

void initStudent(struct Student *student, int rollno, char *name, float marks) {
    student->rollno = rollno;
    strncpy(student->name, name, 20);
    student->name[19] = '\0';
    student->marks = marks;
}
void displayStudent(struct Student *student) {
    printf("%d %s %.2f\n", student->rollno, student->name, student->marks);
}
void displayArray(struct Student *arr, int size) {
    printf("Displaying\n");
    for (int i = 0; i < size; i++) {
        displayStudent(&arr[i]);
    }
}
void initArray(struct Student *arr, int size) {
    printf("Scanning\n");
    for (int i = 0; i < size; i++) {
        int rollno;
        char name[20];
        float marks;
        scanf("%d %19s %f", &rollno, name, &marks);
        initStudent(&arr[i], rollno, name, marks);
    }
}

int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    struct Student *arr = malloc(size * sizeof(struct Student));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    initArray(arr, size);
    displayArray(arr, size);
    free(arr);
    return 0;
}
