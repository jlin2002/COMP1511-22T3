#include <stdio.h>
// 1. Create a function with a void return type called 'odd_only' that takes
// in an array of integers and the number of elements in the array
void odd_only(int numbers[], int size);

// 7. Create a function with a char return type called 'largest_character' that
// takes in an array of characters and the number of elements in the array. Assume
// that the array is non-empty
char largest_character(char characters[], int size);
int main(void) {
    // Time to test 'odd_only'!
    // 4. Create an array of integers with at least 5 elements. Make sure you
    // include both even an odd integers!
    int numbers[] = {3, 4, 1, 8, 6};
    // 5. Call the 'odd_only' function, passing in the array of integers you
    // created in task 4. Make sure you pass in the size of the array as well
    odd_only(numbers, 5);
    // 6. Write a loop that loops through the array and prints the updated
    // values. Make sure that all the values printed are the same as the original
    // array, except the even numbers have been incremented by 1
    printf("After odd only: \n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", numbers[i]);
    }
   
    // Time to test 'largest_character'!
    // 11. Create an array of characters with at least 5 elements. Include all
    // sorts of characters, not just alphabetic or numeric ones!
    char characters[] = {'4', 'b', 'X', '-', '?'};
    // 12. Call the 'largest_character' function, passing in the array of
    // characters you created in task 11. Make sure you pass in the size of the
    // array as well.
    // 13. Print out the value returned by the largest_character function. Check the
    // ascii table by typing 'ascii -d' in the terminal. Is the character printed
    // indeed the one with the highest ascii value out of the ones in the array?
    printf("The largest character is %c\n", largest_character(characters, 5));
    return 0;
}

void odd_only(int numbers[], int size) {
    // In odd_only
    // 2. Create an empty while loop whose iterator loops through the indexes of
    // the array that was passed in
    int i = 0;
    while (i < size) {
        // 3. Inside the while loop, write an if statement which adds 1 to the element
        // at the given index if the element is even.
        if (numbers[i] % 2 == 0) {
            numbers[i]++;
        }
        i++;
    }
}

char largest_character(char characters[], int size) {
    // In largest_character
    // 8. Create an empty while loop whose iterator loops through the indexes of the
    // array that was passed in
    char largest = characters[0];
    int i = 1;
    while (i < size) {
        // 9. Inside the while loop, keep track of the largest character in the array
        // that is, the element with the highest ascii value. Hint: You might have to
        // declare a variable before the while loop, initialised to the first value in
        // the array which stores the largest character observed so far.
        if (characters[i] > largest) {
            largest = characters[i];
        }
        i++;
    }
    // 10. Return the largest character
    return largest;
}
