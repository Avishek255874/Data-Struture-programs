#include <stdio.h>

int main() {
    int year, month, daysInMonth, startingDay;
    
    // Input year and month
    printf("Enter year (e.g., 2023): ");
    scanf("%d", &year);
    printf("Enter month (1-12): ");
    scanf("%d", &month);

    // Array to store the number of days in each month
    int daysPerMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Check for leap year (February has 29 days)
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        daysPerMonth[2] = 29;
    }

    // Ensure the month entered is valid
    if (month < 1 || month > 12) {
        printf("Invalid month. Please enter a month between 1 and 12.\n");
        return 1;
    }

    // Calculate the number of days in the selected month
    daysInMonth = daysPerMonth[month];

    // Calculate the starting day of the week (0 for Sunday, 1 for Monday, etc.)
    startingDay = year - (14 - month) / 12;
    startingDay = (startingDay + startingDay/4 - startingDay/100 + startingDay/400) % 7;

    // Print the header with the month and year
    printf("\n   Calendar for %d/%d\n\n", month, year);

    // Print the days of the week
    printf(" Sun Mon Tue Wed Thu Fri Sat\n");

    // Print leading spaces for the first week
    for (int i = 0; i < startingDay; i++) {
        printf("    ");
    }

    // Print the days of the month
    for (int day = 1; day <= daysInMonth; day++) {
        printf("%4d", day);

        // Start a new line for the next week
        if ((day + startingDay) % 7 == 0 || day == daysInMonth) {
            printf("\n");
        }
    }

    return 0;
}
