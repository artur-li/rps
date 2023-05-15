#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(void) {
    char playerHand[10];
    char computerHand[10];
    char playAgain[2];

    // game loop 
    while (strcmp(playAgain, "n") != 0) {

        // Player move
        while (1) {
            printf("\n\n==================================");
            printf("\nPick your hand ('rock'/'paper'/'scissors'): ");
            scanf("%s", playerHand);
            if (strcmp(playerHand, "rock") != 0 && strcmp(playerHand, "paper") != 0 && strcmp(playerHand, "scissors") != 0) {
                printf("invalid entry\n");
            } else {
                printf("\nYou picked: %s\n", playerHand);
                break;
            }
        }

        // Computer move
        srand(time(NULL));
        int move = rand() % 3;
        if (move == 0) {
            strcpy(computerHand, "rock");
        } else if (move == 1) {
            strcpy(computerHand, "paper");
        } else {
            strcpy(computerHand, "scissors");
        }
        printf("Cpu picked: %s\n\n", computerHand);

        // Winner logic
        if (strcmp(computerHand, playerHand) == 0) {
            printf("Draw!");
        } else if (strcmp(playerHand, "rock") == 0 && strcmp(computerHand, "scissors") == 0 || strcmp(playerHand, "paper") == 0 && strcmp(computerHand, "rock") == 0|| strcmp(playerHand, "scissors") == 0 || strcmp(computerHand, "paper") == 0) {
            printf("You win!");
        } else {
            printf("Computer wins!");
        }

        // Play again?
        while (1) {
            printf("\n\nPlay again? (y)/(n)");
            scanf(" %c", &playAgain);
            if (strcmp(playAgain, "y") != 0 && strcmp(playAgain, "n") != 0) {
                printf("invalid entry");
            } else if (strcmp(playAgain, "y") == 0) {
                break;
            } else {
                break;
            }
        }
    }
    
    return 0;
}
