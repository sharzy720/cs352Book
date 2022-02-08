//
// Created by Johnathyn Strong on 1/15/22.
// Write a program that prompts for the length of three line segments as integers
// If the three lines could form a triangle, the program prints “Is a triangle.”
// Otherwise, it prints “Is not a triangle.”
// Recall that the sum of the lengths of any two sides of a triangle must be greater than the length of the third side.
// For example, 20, 5, and 10 can’t be the lengths of the sides of a triangle because 5 + 10 is not greater than 20
//

#include "stdio.h"

int main() {
    int side1, side2, side3;

    printf("Enter the length of side 1 of a triangle: ");
    scanf("%d", &side1);

    printf("Enter the length of side 2 of a triangle: ");
    scanf("%d", &side2);

    printf("Enter the length of side 3 of a triangle: ");
    scanf("%d", &side3);

    if ((side1 + side2) > side3 && (side3 + side1) > side2 && (side2 + side3) > side1) {
        printf("Is a triangle!");
    } else {
        printf("Is not a triangle!");
    }
}