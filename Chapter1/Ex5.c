//
// Created by Johnathyn Strong on 1/15/22.
// Write a program that will print out a box drawn with asterisks,as shown:
// ******
// *    *
// *    *
// ******
// Use a loop so that you can easily draw a larger box
// Modify the program to read in a number from the user specifying how many asterisks high and wide the box should be
//

#include "stdio.h"

int main() {
    int width, height;

    printf("Enter the width of your box: ");
    scanf("%d", &width);

    printf("Enter the height of your box: ");
    scanf("%d", &height);

    for (int i = 0; i < width; ++i) {
        printf("*");
    }

    printf("\n");

    for (int i = 0; i < height - 2; ++i) {
        printf("*");
        for (int j = 0; j < width - 2; ++j) {
            printf(" ");
        }
        printf("*\n");
    }

    for (int i = 0; i < width; ++i) {
        printf("*");
    }

    printf("\n");
}