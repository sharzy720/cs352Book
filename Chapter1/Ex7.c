//
// Created by Johnathyn Strong on 1/15/22.
// Write a program that prints all the prime numbers in 2 through 100
// A prime number is an integer that is greater than 1 and is divisible only by 1 and itself
// Pseudocode for finding primes:
//  for n = 2 until 100
//      for i = 2 until the square root of n
//          if n % i == 0
//              the number is divisible by i
//          else
//              n is prime
//
// prime from 2 -> 100
// 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97

#include "stdio.h"
#include "math.h"

int main() {
    int min = 2, max = 101, prime;

    for (int n = min; n < max; n++) {
        prime = 0;
        for (int i = min; i < sqrt(n)+1; i++) {
            if (n != i && (n % i) == 0) {
                prime++;
                break;
            }
        }
        if (prime == 0) {
            printf("%d is prime\n", n);
        }
    }
}