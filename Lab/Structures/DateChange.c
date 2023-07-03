// Write a program to create a structure named Date having day, month, and year as its elements. Store the current date in the structure. Now add 45 days to the current date and display the final date.

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int main() {
    struct Date date;

    printf("Enter current date (dd mm yyyy): ");
    scanf("%d %d %d", &date.day, &date.month, &date.year);

    // Add 45 days to the current date
    date.day += 45;

    // Adjust month and year if necessary
    while (1) {
        int days_in_month;
        if (date.month == 2) {
            // February
            if ((date.year % 4 == 0 && date.year % 100 != 0) || (date.year % 400 == 0)) {
                // Leap year
                days_in_month = 29;
            } else {
                // Non-leap year
                days_in_month = 28;
            }
        } else if (date.month == 4 || date.month == 6 || date.month == 9 || date.month == 11) {
            // April, June, September, November
            days_in_month = 30;
        } else {
            // January, March, May, July, August, October, December
            days_in_month = 31;
        }

        if (date.day > days_in_month) {
            // Move to next month
            date.day -= days_in_month;
            date.month++;
            if (date.month > 12) {
                // Move to next year
                date.month = 1;
                date.year++;
            }
        } else {
            break;
        }
    }

    printf("Final date: %02d-%02d-%04d\n", date.day, date.month, date.year);

    return 0;
}
// Output:
// Enter current date (dd mm yyyy): 01 01 2020
// Final date: 15-02-2020
//
// Enter current date (dd mm yyyy): 01 02 2020
// Final date: 17-03-2020
//
// Logic:
// 1. Add 45 days to the current date.
// 2. If the day is greater than the number of days in the month, move to the next month.
// 3. If the month is greater than 12, move to the next year.
// 4. Repeat steps 2 and 3 until the day is less than or equal to the number of days in the month.
//