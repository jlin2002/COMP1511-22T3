// Code that demonstrates looping with fgets until EOF
// Joanna Lin, October 2022
#include <stdio.h>

#define MAX_LETTERS 100

int main(void) {
    char my_var[MAX_LETTERS];
    while (fgets(my_var, MAX_LETTERS, stdin) != NULL) {
        printf("%s", my_var);
    }

    return 0;
}
