/* Sorting Integers
 * Write a function that can be used to sort three integers.
 * The function will need to have three parameters that are pointers to integers.
 * When the function returns, the three parameters should be in ascending order.
 * Provide a program to test your function by asking the user to enter three integers,
 *   pass those integers to the function and then print them after the function returns.
 */

#include <stdio.h>

/* Function to sort 3 passed values
 * @param val1  First value in the set
 * @param val2  Second value in the set
 * @param val3  Third value in the set
 */
void sort(int* val1, int* val2, int* val3) {
    int temp;   // Temporary holder of a value

    // First pass
    if (*val1 > *val2) {
        temp = *val1;
        *val1 = *val2;
        *val2 = temp;
        if (*val2 > *val3) {
            temp = *val2;
            *val2 = *val3;
            *val3 = temp;
        }
    }

    // Second pass
    if (*val1 > *val2) {
        temp = *val1;
        *val1 = *val2;
        *val2 = temp;
        if (*val2 > *val3) {
            temp = *val2;
            *val2 = *val3;
            *val3 = temp;
        }
    }
}

/*
 * Main function for the program to sort 3 entered numbers
 */
int main() {
    int val1,
        val2,
        val3;

    printf("Enter 3 numbers to be sorted, seportated by spaces: ");
    scanf("%d %d %d", &val1, &val2, &val3);

    sort(&val1, &val2, &val3);

    printf("Sorted numbers, %d %d %d", val1, val2, val3);
}