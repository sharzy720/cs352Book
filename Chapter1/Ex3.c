//
// Created by Johnathyn Strong on 1/15/22.
// Write a program that asks for the number of quarters, dimes, nickels, and pennies you have
// Then compute the total value of your change and print the number of dollars and the remaining cents
// The output format should be $X.YY
//

#include "stdio.h"

int main() {
    int quarters, dimes, nickels, pennies;
    double total;

    printf("Enter the number of quarters you have: ");
    scanf("%d", &quarters);

    printf("Enter the number of dimes you have: ");
    scanf("%d", &dimes);

    printf("Enter the number of nickels you have: ");
    scanf("%d", &nickels);

    printf("Enter the number of pennies you have: ");
    scanf("%d", &pennies);

    total = (quarters * 0.25) + (dimes * 0.10) + (nickels * 0.05) + (pennies * 0.01);

    printf("Total of your change: $%.2f", total);
}