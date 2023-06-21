//to display all members in the array of structures
#include <stdio.h>
struct Student {
    int rollno;
    char name[20];
    float marks;
};
void displayArray(struct Student *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", arr[i].rollno);
        printf("Name: %s\n", arr[i].name);
        printf("Marks: %.2f\n", arr[i].marks);
        printf("\n");
    }
}

int main() {
    const char *input = "1001 Aron 100.00";
    int size = 1;
    struct Student arr[size];
    sscanf(input, "%d %s %f", &(arr[0].rollno), arr[0].name, &(arr[0].marks));
    displayArray(arr, size);
    return 0;
}