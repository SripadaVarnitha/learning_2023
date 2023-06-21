//to performs a search operation on an array of structures based on the name of the student
#include <stdio.h>
#include <string.h>
struct Student {
    char name[100];
    float marks;
};
void searchByName(struct Student *arr, int size, const char *name) {
    for (int i = 0; i < size; i++) {
        if (strcmp(arr[i].name, name) == 0) {
            printf("Student found:\nName: %s\nMarks: %.2f\n\n",arr[i].name, arr[i].marks);
            return;
        }
        else
        printf("Student name not found:\nName:%s\n",arr[i].name) ;
    }
    printf("Student with name '%s' not found.\n\n", name);
}

int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    struct Student arr[size];
    for (int i = 0; i < size; i++) {
        printf("Enter details for Student:", i + 1);
        printf("\nName: ");
        scanf("%s", arr[i].name);
        printf("Marks: ");
        scanf("%f", &(arr[i].marks));
        printf("\n");
    }
    char searchName[20];
    printf("\nEnter the name to search: ");
    scanf("%s", searchName);
    searchByName(arr, size, searchName);
    return 0;
}

