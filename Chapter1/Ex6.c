//
// Created by Johnathyn Strong on 1/15/22.
// Write a program that reads in numbers until the same number is typed twice in a row
// Modify it to go until three in a row are typed
// Modify it so that it first asks, “How many in a row should I wait for?” and then goes until some number is typed that many times
// For example, for two in a row, if the user typed “1 2 5 3 4 5 7” the program would still be looking for two in a row
// The number 5 had been typed twice, but not in a row
// If the user then typed 7, that would terminate the program because two 7s were typed, one directly after the other
//

#include "stdio.h"

int main() {
    int num1, num2, total = 0, max;

//    while(num1 != num2) {
//        num2 = num1;
//
//        printf("Enter a number: ");
//        scanf("%d", &num1);
//    }

    printf("How many should I wait for? ");
    scanf("%d", &max);

    while (max != total) {
        printf("Enter a number: ");
        scanf("%d", &num1);

        if (num1 == num2) {
            total++;
        } else {
            total = 0;
        }
        num2 = num1;
    }

    printf("Typed same number %d times", max);
}