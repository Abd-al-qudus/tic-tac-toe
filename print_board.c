#include "tic_tac_toe.h"
/**
 * print_board - prints the tic tac toe board
 * which would be used throughout the game.
 * This function is essentially called every
 * time the game is on.
 * @board: game board to print
 * Return: void
 */
void print_board(char board[3][3])
{
	int length, i, j;

	length = sizeof(board[0]) / sizeof(char);
	for (i = 0; i < length; i++)
	{
		for (j = 0; j < length; j++)
		{
			printf(" %c ", board[i][j]);
			if (j != length - 1)
				printf(" |");
		}
		printf("\n----|----|----\n");
	}
}
