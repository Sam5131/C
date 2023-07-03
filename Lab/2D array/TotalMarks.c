// Write a program to take 3 student marks in 5 subjects. Print the total marks of each student and the average marks of each subject.
#include <stdio.h>
int main() {
    int marks[3][5];
    int i, j;

    // User input
    printf("Enter marks for 3 students in 5 subjects:\n");
    for (i = 0; i < 3; i++) {
        printf("Student %d:\n", i+1);
        for (j = 0; j < 5; j++) {
            printf("Subject %d: ", j+1);
            scanf("%d", &marks[i][j]);
        }
    }

    // Calculate and print total marks of each student
    printf("\nTotal marks of each student:\n");
    for (i = 0; i < 3; i++) {
        int total = 0;
        for (j = 0; j < 5; j++)
            total += marks[i][j];
        printf("Student %d: %d\n", i+1, total);
    }

    // Calculate and print average marks of each subject
    printf("\nAverage marks of each subject:\n");
    for (j = 0; j < 5; j++) {
        int sum = 0;
        for (i = 0; i < 3; i++)
            sum += marks[i][j];
        float avg = (float)sum/3;
        printf("Subject %d: %.2f\n", j+1, avg);
    }

    return 0;
}
// Output:
// Enter marks for 3 students in 5 subjects:
// Student 1:
// Subject 1: 10
// Subject 2: 20
// Subject 3: 30
// Subject 4: 40
// Subject 5: 50
// Student 2:
// Subject 1: 11
// Subject 2: 22
// Subject 3: 33
// Subject 4: 44
// Subject 5: 55
// Student 3:
// Subject 1: 12
// Subject 2: 23
// Subject 3: 34
// Subject 4: 45
// Subject 5: 56
//
// Total marks of each student:
// Student 1: 150
// Student 2: 165
// Student 3: 170
//
// Average marks of each subject:
// Subject 1: 11.00
// Subject 2: 21.67
// Subject 3: 32.33
// Subject 4: 43.00
// Subject 5: 53.67
//
// Logic:
// 1. Declare a 2D array of size 3x5 to store the marks of 3 students in 5 subjects.
// 2. Take user input for the marks of 3 students in 5 subjects.
// 3. Calculate and print the total marks of each student.
// 4. Calculate and print the average marks of each subject.
// 5. Exit.