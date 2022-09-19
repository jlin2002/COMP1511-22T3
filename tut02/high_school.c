// Program that takes in a school year from the user and tells them whether
// they can go to high school or not.
// Joanna Lin, September 2022.

#include <stdio.h>

#define MIN_YEAR 7
#define MAX_YEAR 12

void print_error(void) {
    printf("Please enter a valid school year!\n");
}

int main(void) {
    int school_year;
    printf("Provide your school year: ");
    scanf("%d", &school_year);
    if (school_year < 0) {
        print_error();
    } else if (school_year < MIN_YEAR) {
        printf("You are not old enough for high school\n");
    } else if (school_year <= MAX_YEAR) {
        printf("You can go to high school\n");
    } else {
        printf("You are too old for high school\n");
    }
    return 0;
}
