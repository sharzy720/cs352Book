//Write a program to compute the probability that we can toss some number of heads, n, in a row using a coin.
//Compute the probability by simulating the coin toss with a random number.
//A Java solution to this problem is presented in Section 4.7 of JBD.
//The function rand() mentioned in the previous exercise returns a random integer
//  in the range 0 to RAND_MAX,which is defined in stdlib.h.
//You can simulate a coin toss by treating a return value from rand() that is less
//  than RAND_MAX/2 as a head and treating any other value as a tail.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int heads = 0;
    int tails = 0;
    int coin_value;
    int num_coins;
    float probability;

    printf("Enter a number of coins to toss: ");
    scanf("%d", &num_coins);
    for (int i = 0; i < num_coins; ++i) {
        coin_value = rand();
        if (coin_value < (RAND_MAX/2)) {
            heads++;
        } else {
            tails++;
        }
    }

    probability = (float) heads / num_coins;

    printf("Number of heads = %d, Number of tails = %d\n", heads, tails);
    printf("The probability of heads when tossing %d coins is: %1.3f",
           num_coins, probability);

    return 0;
}