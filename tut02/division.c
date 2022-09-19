// Program that scans two integers and prints out their truncated quotient
// and quotient given the quotient is larger than 1
// Joanna Lin, September 2022

#include <stdio.h>

void print_quotient_too_small(void) {
    printf("The dividend should be larger than the divisor!\n");
}
void print_divide_by_zero(void) {
    printf("The divisor cannot be zero!\n");
}

int main(void) {
    int dividend;
    int divisor;
    scanf("%d %d", &dividend, &divisor);
    if (dividend < divisor) {
        print_quotient_too_small();
    } else if (divisor == 0) {
        print_divide_by_zero();
    } else if (dividend > divisor) {
        printf("truncated quotient: %d, quotient is %lf\n",
            dividend / divisor, (dividend * 1.0) / (divisor * 1.0));
    }
    return 0;
}
