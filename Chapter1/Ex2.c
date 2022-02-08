//
// Created by Johnathyn Strong on 1/15/22.
// Write a program to compute the area of a circle given its radius
// Let radius be a variable of type double, and use scanf() to read in its value
// Be sure that the output is understandable.
// If you include the header file math.h using #include <math.h>, then you can use the predefined constant M_PI to get the value of π
//

#include "stdio.h"
#include "math.h"

int main() {
    double radius, area;

    printf("Enter the radius of a circle: ");
    scanf("%lf", &radius);

    area = M_PI * (radius * radius);

    printf("The area of a circle with a radius of %.2f is %.2f", radius, area);
}