#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main(void)

{



    printf("Let's play Rock, Paper, Scissors!\n");

    string player1 = get_string("Player 1, select your play: ");
    string player2 = get_string("Player 2, select your play: ");

    if (player1 == "rock" && player2 == "paper")
    {
        printf("Player 2 wins!");
    }
    else if (player 1 = "rock" && player2 == "scissors")
    {
        printf("Player 1 wins!");
    }
    else if (player1 == "paper" && player2 == "rock")
    {
        printf("Player 2 wins!");
    }
    else if (player1 == "paper" && player2 == "scissors")
    {
        printf("Player 2 wins!");
    }
    else if (player1 == "scissors" && player2 == "rock")
    {
        printf("Player 2 wins!");
    }
    else if (player1 == "scissors" && player2 == "paper")
    {
        printf("Player 1 wins!");
    }
    else
    {
        printf("It is a tie!");
    }

}