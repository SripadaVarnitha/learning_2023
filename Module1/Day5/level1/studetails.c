//to dynamically stores data for n students using structures
#include <stdio.h>
#include <stdlib.h>
struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    int n;
    struct Student *students;
    // Read the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);
    // Allocate memory dynamically for array of students
    students = (struct Student *)malloc(n * sizeof(struct Student));
    // for each student
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Age: ");
        scanf("%d", &(students[i].age));

        printf("Marks: ");
        scanf("%f", &(students[i].marks));
    }
    // Display data of each student
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nDetails of student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Marks: %.2f\n", students[i].marks);
    }
    // Free the dynamically allocated memory
    free(students);
    return 0;
}
