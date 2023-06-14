//to print student details
#include <stdio.h>
int main() {
    int rollNo;
    char fullName[50];
    float physicsMarks, mathMarks, chemistryMarks;
    float totalMarks, percentage;

    printf("Enter Roll No: ");
    scanf("%d", &rollNo);
    printf("Enter Full Name: ");
    scanf(" %[^\n]s", fullName); 
    
    printf("Enter Marks of Physics: ");
    scanf("%f", &physicsMarks);
    printf("Enter Marks of Math: ");
    scanf("%f", &mathMarks);

    printf("Enter Marks of Chemistry: ");
    scanf("%f", &chemistryMarks);
    totalMarks = physicsMarks + mathMarks + chemistryMarks;
    percentage = (totalMarks / 300) * 100;
    printf("\n-- Summary --\n");
    printf("Roll No: %d\n Name: %s\n", rollNo, fullName);
    printf("Physics Marks: %.2f\n Math Marks: %.2f\n Chemistry Marks: %.2f\n", physicsMarks,mathMarks,chemistryMarks);
    printf("Total Marks: %.2f\n Percentage: %.2f%%\n", totalMarks,percentage);
    return 0;
}
