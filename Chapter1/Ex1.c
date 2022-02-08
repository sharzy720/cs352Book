//
// Created by Johnathyn Strong on 1/15/22.
// Write a program that reads in two integers for the width and height of a rectangle,
// then prints the area of the rectangle
//

#include <stdio.h>

int main() {
    int width, height, area;

    printf("Enter the width of a rectangle: ");
    scanf("%d", &width);

    printf("Enter the height of a rectangle: ");
    scanf("%d", &height);

    area = width * height;

    printf("The area of the rectangle is: %d", area);
}