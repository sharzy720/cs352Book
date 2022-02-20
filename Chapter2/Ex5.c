// Write a program that allows the user to play the game of Craps, which is played with two dice.
// A simple version of the game between one player and “the house” can be described as follows.

// Step 1. The player bets some amount of money.
// Step 2. The player throws the dice.
// Step 3. If the dice total 2 or 12, the player loses the bet and play starts again at step 1.
// Step 4. If the dice total 7 or 11, the player wins the amount of the bet from the house and play starts again at step 1.
// Step 5. If the dice total any other value, this value is called the point.
// Step 6. The player continues to roll the dice until they total either 7 or the point.
// Step 7. If the dice total is 7 the player loses the bet;
//      otherwise, the player has made the point and wins the amount of the bet from the house.
//      In either case, play starts again at step 1.

// Play continues until the player indicates that he or she wants to quit or until the player runs out of money.
// Before you begin to write the code for this program, you should develop a design.
// Convert the description of play to pseudocode and identify the primary methods that you’ll need.
// You may even need to refine the specification some more first.
// For example, how much money does the player start with?
// To simulate the roll of the dice, place #include <stdlib.h> at the top of your source file, then the following expression
//                          rand()%6 + 1
// will evaluate to a random integer of 1 through 6.
// You must simulate rolling each die separately.
// Generating a random number in the range 2 through 12 isn’t sufficient.

#include <stdio.h>
#include <stdlib.h>

/**
 * Method to roll 2 dice and add their value together
 * @return Added value of the 2 rolled dice
 */
int roll_dice() {
    int dice_total,         // Total value of the 2 rolled dice
        dice1 = rand()%6+1, // Value of dice 1
        dice2 = rand()%6+1; // Value of dice 2
    dice_total = dice1 + dice2;
    return dice_total;
}

/**
 * Once a point value is set this method handles the loop to see if the bet is
 *  lost or won
 * @param point Value to check for
 * @param bet Players current bet
 * @param bank Pointer to the players bank
 */
void point_watch(int point, int bet, int* bank) {
    while (1) {
        int dice_total = roll_dice();   // Total value of the 2 rolled dice
        if (dice_total == 7) {
            printf("You Lose!\n");
            break;
        } else if (dice_total == point) {
            printf("You Win!\n");
            *bank += bet;
            break;
        }
    }
}

/**
 * Main game method
 * @param bank Pointer to the players bank
 */
void craps(int* bank) {
    int play_again = 1; // Used to loop till the player is finished playing
    int bet;            // Players current bet
    int dice_total;     // Value of the 2 rolled dice
    int point;          // Value of the point to check for when set
    while (play_again != 0) {
        printf("Please enter a bet: ");
        scanf("%d", &bet);

        dice_total = roll_dice();
        printf("Dice total = %d\n", dice_total);
        switch (dice_total) {
            case 2:
            case 12:
                printf("You Lose!\n");
                bet = 0;
            case 7:
            case 11:
                printf("You Win!\n");
                *bank += bet;
            default:
                point = dice_total;
                point_watch(point, bet, bank);
        }

        printf("Total winnings = %d\n"
               "Do you want to play again? yes(1) no(0)  ", *bank);
        scanf("%d", &play_again);
    }
}

/**
 * Main method of the program
 * @return
 */
int main() {
    int bank = 0;   // The players bank

    craps(&bank);

    printf("Goodbye, your winnings = %d", bank);
    return 0;
}
