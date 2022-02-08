//
// Created by Johnathyn Strong on 1/15/22.
//

#include "stdio.h"

int main() {
    double terms = 20, total = 1, test = 0;

    for (int i = 0; i < terms; i++) {
        test += 1.0 / (i + 1.0);
        total += total * test;
    }

    printf("Approximation of e to %.0f terms is %.4f", terms, total);
}