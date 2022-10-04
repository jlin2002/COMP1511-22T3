// A program that simulates making room bookings.
//
// It first asks the user to specify the number of bookings they'd
// like to make.
// It then asks the user to specify the rooms they'd like to book,
// printing out messages informing them of whether they were
// successful or not in making the booking.
// For every room, the program then prints whether it was booked
// or not
//
// This program demonstrates scanning values into an array.
// Joanna Lin, October 2022

#include <stdio.h>

#define NUM_ROOMS 10 
#define TRUE 1
#define FALSE 0

int main(void) {
    int booked[NUM_ROOMS] = {FALSE};
    
    printf("How many bookings would you like to make?: ");
    int num_bookings;
    scanf("%d", &num_bookings);

    printf("Enter the rooms you'd like to book (0-%d):\n", NUM_ROOMS - 1);
    for (int i = 0; i < num_bookings; i++) {
        int room;
        scanf("%d", &room);
        if (room < 0 || NUM_ROOMS <= room) {
            printf("Please enter a valid room number.\n");
        } else {
            booked[room] = TRUE; 
            printf("Successfully booked room %d.\n", room);
        }
    }
    
    for (int i = 0; i < NUM_ROOMS; i++) {
        printf("Room %d is ", i);
        if (booked[i]) {
            printf("booked");
        } else {
            printf("not booked");
        }
        printf(".\n");
    }
    
    return 0;
}
