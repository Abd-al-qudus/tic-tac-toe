#include "tic_tac_toe.h"
/**
 * print_winner - check and print the winner
 * @check: winner to check
 * Return: void
 */
void print_winner(char check)
{
	char PLAYER, COMPUTER;

	PLAYER = 'X', COMPUTER = 'Y';
	if (check == PLAYER)
		printf("\nYOU WON\n");
	else if (check == COMPUTER)
		printf("\nYOU LOSE\n");
	else
		printf("\nIT'S A TIE\n");
}
