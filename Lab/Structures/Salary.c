// Write a program to define a structure personal that would contain the person’s name, date of joining, and salary. Using this structure write a program to read this information for one person from the keyboard and print the same on the screen.

#include <stdio.h>

struct personal {
    char name[30];
    char date_of_joining[30];
    float salary;
};

int main() {
    struct personal person;

    printf("Enter name: ");
    scanf("%s", person.name);
    printf("Enter date of joining (dd-mm-yyyy): ");
    scanf("%s", person.date_of_joining);
    printf("Enter salary: ");
    scanf("%f", &person.salary);

    printf("\nName: %s\n", person.name);
    printf("Date of Joining: %s\n", person.date_of_joining);
    printf("Salary: %.2f\n", person.salary);

    return 0;
}
// Output:
// Enter name: John
// Enter date of joining (dd-mm-yyyy): 01-01-2020
// Enter salary: 10000
// Name: John
// Date of Joining: 01-01-2020
// Salary: 10000.00
//