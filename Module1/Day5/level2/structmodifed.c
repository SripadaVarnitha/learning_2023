//to pass pointer to structure as a parameter to a function, modifying members,returning a pointer to modified structure back to calling function
#include<stdio.h>
#include <stdlib.h>
struct Person {
    char name[50];
    int age;
};
//function to modify the data given
struct Person* modifyPerson(struct Person* person) {
    printf("Enter new name and age of the person: ");
    scanf("%s %d", person->name, &person->age);
    return person;
}
int main() {
    struct Person person;
    printf("Enter name and age of the person: "); //First enter the name and age 
    scanf("%s %d", person.name, &person.age);
    struct Person* modifiedPerson = modifyPerson(&person);
    printf("\nModified Person Details:\n");//Second enter the modified name and age for fisrt given data 
    printf("Name: %s\n", modifiedPerson->name);
    printf("Age: %d\n", modifiedPerson->age);    
    return 0;
}
