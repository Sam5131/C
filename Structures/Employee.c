// Write a program to create an array of employee structures to store emp-no, name, basic salary, and HRA. Input the details of N employees and display emp-no, name, basic, HRA, and net salary. Display the details of all employees whose net salary is more than the average net salary of all employees.

#include <stdio.h>

struct employee {
    int emp_no;
    char name[30];
    float basic_salary;
    float hra;
};

int main() {
    int N, i;
    printf("Enter the number of employees: ");
    scanf("%d", &N);

    struct employee employees[N];

    for (i = 0; i < N; i++) {
        printf("\nEnter details for employee %d\n", i + 1);
        printf("Enter emp-no: ");
        scanf("%d", &employees[i].emp_no);
        printf("Enter name: ");
        scanf("%s", employees[i].name);
        printf("Enter basic salary: ");
        scanf("%f", &employees[i].basic_salary);
        printf("Enter HRA: ");
        scanf("%f", &employees[i].hra);
    }

    // Calculate net salary
    float net_salary[N];
    for (i = 0; i < N; i++) {
        net_salary[i] = employees[i].basic_salary + employees[i].hra;
    }

    // Calculate average net salary
    float sum = 0;
    for (i = 0; i < N; i++) {
        sum += net_salary[i];
    }
    float avg_net_salary = sum / N;

    // Display emp-no, name, basic, HRA, and net salary
    printf("\nEmp-No\tName\tBasic\tHRA\tNet Salary\n");
    for (i = 0; i < N; i++) {
        printf("%d\t%s\t%.2f\t%.2f\t%.2f\n", employees[i].emp_no, employees[i].name, employees[i].basic_salary, employees[i].hra, net_salary[i]);
    }

    // Display details of all employees whose net salary is more than the average net salary
    printf("\nEmployees with net salary more than average (%.2f):\n", avg_net_salary);
    printf("Emp-No\tName\tBasic\tHRA\tNet Salary\n");
    for (i = 0; i < N; i++) {
        if (net_salary[i] > avg_net_salary) {
            printf("%d\t%s\t%.2f\t%.2f\t%.2f\n", employees[i].emp_no, employees[i].name, employees[i].basic_salary, employees[i].hra, net_salary[i]);
        }
    }

    return 0;
}
// Output:
// Enter the number of employees: 3
//
// Enter details for employee 1
// Enter emp-no: 1
// Enter name: A
// Enter basic salary: 1000
// Enter HRA: 100
//
// Enter details for employee 2
// Enter emp-no: 2
// Enter name: B
// Enter basic salary: 2000
// Enter HRA: 200
//
// Enter details for employee 3
// Enter emp-no: 3
// Enter name: C
// Enter basic salary: 3000
// Enter HRA: 300
//
// Emp-No  Name    Basic   HRA     Net Salary
// 1       A       1000.00 100.00  1100.00
// 2       B       2000.00 200.00  2200.00
// 3       C       3000.00 300.00  3300.00
//
// Employees with net salary more than average (2200.00):
// Emp-No  Name    Basic   HRA     Net Salary
// 3       C       3000.00 300.00  3300.00
//
// Logic:
// 1. Create an array of employee structures to store emp-no, name, basic salary, and HRA.
// 2. Input the details of N employees.
// 3. Calculate net salary.
// 4. Calculate average net salary.
// 5. Display emp-no, name, basic, HRA, and net salary.
// 6. Display details of all employees whose net salary is more than the average net salary.
//