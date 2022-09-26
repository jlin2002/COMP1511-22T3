#include <stdio.h>

enum opal_card_type {
    ADULT,
    STUDENT,
    CONCESSION
};

struct person {
    int shoe_size;
    double height;
    char first_name_initial;
    enum opal_card_type card_type;
};

int main(void) {
    // Task: Declare a variable of type 'struct person' called
    // 'tom' and initialise the shoe_size to 5, height to 150.5cm,
    // first_name_initial to 'T'
    struct person tom;
    tom.shoe_size = 5;
    tom.height = 150.5;
    tom.first_name_initial = 'T';

    // Task: Declare a variable of type 'enum opal_card_type'
    // called my_card_type and initialise it to CONCESSION.
    enum opal_card_type my_card_type = CONCESSION;

    // Task: Initialise tom's card_type to ADULT
    tom.card_type = ADULT;

    printf(
        "Shoe size: %d, Height: %.1lfcm, First letter: %c, Card type: %d\n",
        tom.shoe_size, tom.height, tom.first_name_initial, tom.card_type
    );

    return 0;
}
