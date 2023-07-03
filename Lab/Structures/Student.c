// Write a program to create an array of student structures to store the roll no., name, and marks in 3 subjects. Input the details of N students into the array and display roll no., name, and total marks of each student in decreasing order of total marks.

#include <stdio.h>

struct student {
    int roll_no;
    char name[30];
    int marks[3];
};

int main() {
    int N, i, j;
    printf("Enter the number of students: ");
    scanf("%d", &N);

    struct student students[N];

    for (i = 0; i < N; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Enter roll no: ");
        scanf("%d", &students[i].roll_no);
        printf("Enter name: ");
        scanf("%s", students[i].name);
        for (j = 0; j < 3; j++) {
            printf("Enter marks in subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
        }
    }

    // Calculate total marks
    int total_marks[N];
    for (i = 0; i < N; i++) {
        total_marks[i] = 0;
        for (j = 0; j < 3; j++) {
            total_marks[i] += students[i].marks[j];
        }
    }

    // Sort in decreasing order of total marks
    for (i = 0; i < N - 1; i++) {
        for (j = i + 1; j < N; j++) {
            if (total_marks[i] < total_marks[j]) {
                // Swap total marks
                int temp = total_marks[i];
                total_marks[i] = total_marks[j];
                total_marks[j] = temp;

                // Swap student details
                struct student temp_student = students[i];
                students[i] = students[j];
                students[j] = temp_student;
            }
        }
    }

    // Display roll no, name, and total marks of each student
    printf("\nRoll No\tName\tTotal Marks\n");
    for (i = 0; i < N; i++) {
        printf("%d\t%s\t%d\n", students[i].roll_no, students[i].name, total_marks[i]);
    }

    return 0;
}
// Output:
// Enter the number of students: 3
//
// Enter details for student 1
// Enter roll no: 1
// Enter name: John
// Enter marks in subject 1: 10
// Enter marks in subject 2: 20
// Enter marks in subject 3: 30
//
// Enter details for student 2
// Enter roll no: 2
// Enter name: Jane
// Enter marks in subject 1: 20
// Enter marks in subject 2: 30
// Enter marks in subject 3: 40
//
// Enter details for student 3
// Enter roll no: 3
// Enter name: Jack
// Enter marks in subject 1: 30
// Enter marks in subject 2: 40
// Enter marks in subject 3: 50
//
// Roll No Name    Total Marks
// 3       Jack    120
// 2       Jane    90
// 1       John    60
//
// logic:
// 1. Create an array of student structures to store the roll no., name, and marks in 3 subjects.
// 2. Input the details of N students into the array.
// 3. Calculate total marks for each student.
// 4. Sort the array in decreasing order of total marks.
// 5. Display roll no., name, and total marks of each student in decreasing order of total marks.
//