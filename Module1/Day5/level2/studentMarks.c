//to print the average of Student marks and give the above and below average score of the students
#include<stdio.h>
//Structure to represent the Student marks
struct student{
int marks;
}st[100];

int main()
{
int i,n;
float total=0,avgmarks;
printf("\nEnter the number of students in class:"); //size of array
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter student %d marks :",i+1);
scanf("%d",&st[i].marks);
}
for(i=0;i<n;i++)
{
total = total + st[i].marks; //to calculate the total of all students
}
avgmarks=total/n; //to the total result and calculating the overall average of all students
printf("\nAverage marks = %.2f",avgmarks);
for(i=0;i<n;i++)
{
    if(st[i].marks>=avgmarks) //for the students whose score is above the average
    printf("\n student %d marks = %d above average",i+1,st[i].marks);
    else
    printf("\n student %d marks = %d below average",i+1,st[i].marks); //for the students whose score is below the average
} 
}
