/*
 * Write a program to print the values of F(x) = x^2 – 2 for the range 0<x<10.
 * Print the values in this range at a step size of 0.01.
 * Also find the largest and smallest value of F(x) in this interval.
 */

#include <stdio.h>

int main() {
    float step = 0.1,
          value;
    int start = 0,
        end = 10;
    float min = 0,
          max = 0;

    while (step < end) {
        value = (step * step) - 2;

        printf("%f\n", value);

        if (value < min) {
            min = value;
        } else if (value > max) {
            max = value;
        }
        step = step + 0.1;
    }

    printf("max = %f and min = %f", max, min);
    return 0;
}