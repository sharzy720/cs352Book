/* Twenty-one pick up
 * Write a program to play the game of Twenty-One Pickup.
 * This is a two-player game that starts with a pile of 21 stones.
 * Each player takes turns removing 1, 2, or 3 stones from the pile.
 * The player that removes the last stone wins.
 * The program will play against a person and the person always gets to move first.
 * The program should allow the person to play a series of games, keeping track of the number of games won by the person.
 * A Java solution to this problem is presented in Section 4.9 of JBD.
 */

#include <stdio.h>
#include <stdlib.h>

/* Holds the mechanics behind a game of twenty-one pick-ups
 * @param stones    Max number of stones in pool
 * @return  Who won the game
 *          0 - player won game
 *          1 - computer won game
 */
int pick_up(int stones) {
    int last_play,      // Who played last, 0-player 1-computer
        player_choice;  // The players entered choice

    while (stones > 0) {
        printf("Player turn\n"
               "%d stones left\n", stones);

        printf("Enter the number of stones to pick up (1, 2, or 3): ");
        scanf("%d", &player_choice);
        last_play = 0;
        stones = stones - player_choice;

        if (stones > 0) {
            printf("Computer turn\n"
                   "%d stones left\n", stones);

            stones = stones - (rand() % 4);
            last_play = 1;
        }
    }
    return last_play;
}

/* Handles the output for when someone wins the game
 * @param p_wins    Number of player won games
 * @param c_wins    Number of computer won games
 * @param who_won    Who won the current game
 *                  0 - player
 *                  1 - computer
 * @return  If the player wants to play again
 *          0 - end game
 *          1 - play again
 */
int who_won(int *p_wins, int *c_wins, int winner) {
    int play_again = 0; // 0 if player wants to exit, 1 if player wants to play again
    if (winner == 0) {
        *p_wins = *p_wins + 1;
        printf("\tPlayer wins!\n"
               "\twon %d games\n"
               "\twant to play again? (1-yes,0-no) ", *p_wins);
        scanf("%d", &play_again);
    } else if (winner == 1) {
        *c_wins = *c_wins + 1;
        printf("\tComputer wins!\n"
               "\twon %d games\n"
               "\twant to play again? (1-yes,0-no) ", *c_wins);
        scanf("%d", &play_again);
    }
    return play_again;
}

// Handles main loop of Twenty-one Pick-ups game
int main() {
    int stones = 21,    // Total number of stones
        won,            // Who won the game, 0-player 1-computer
        p_wins = 0,     // Number of player wins
        c_wins = 0,     // Number of computer wins
        exit = 1;       // Whether to end the game or not

    while (exit != 0) {
        won = pick_up(stones);

        exit = who_won(&p_wins, &c_wins, won);
    }

    printf("Goodbye!");
}
