#include <stdio.h>
#include <stdlib.h>

int getComputerChoice();
void showChoice(int choice);
void determineWinner(int playerChoice, int computerChoice);

int main() {
    int playerChoice, computerChoice;

    printf("Welcome to Stone-Paper-Scissors Game!\n");
    printf("Enter your choice:\n");
    printf("1. Stone\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");

    printf("Your choice: ");
    scanf("%d", &playerChoice);

    if (playerChoice < 1 || playerChoice > 3) {
        printf("Invalid choice! Please choose between 1 and 3.\n");
        return 0;
    }

    computerChoice = getComputerChoice();

    printf("\nYou chose: ");
    showChoice(playerChoice);
    printf("Computer chose: ");
    showChoice(computerChoice);

    determineWinner(playerChoice, computerChoice);

    return 0;
}

int getComputerChoice() {

}

void showChoice(int choice) {

}

void determineWinner(int playerChoice, int computerChoice) {
    
}
