// A program that scans in a year and determines
// whether it is a leap year or not
// T15A, September 2022

#include <stdio.h>

// Define a procedure called print_prompt
// that prints "Enter year: "
void print_prompt(void) {
    printf("Enter year: ");
}

int main(void) {
    print_prompt();
    int year;
    scanf("%d", &year);
    if (year % 4 != 0) {
        printf("%d is a not leap year.\n", year);
    } else if (year % 100 != 0) {
        printf("%d is a leap year.\n", year);
    } else if (year % 400 != 0) {
        printf("%d is a not leap year.\n", year);
    } else {
        printf("%d is a leap year.\n", year);
    }
    return 0;
}

