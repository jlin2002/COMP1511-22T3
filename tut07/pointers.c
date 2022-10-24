// Basic demo of pointers
// Joanna Lin, October 2022

#include <stdio.h>

int main(void) {
    int x;
    int *x_ptr = &x;
    *x_ptr = 3;
    printf("The value of x is %d\n", x);

    return 0;
}
