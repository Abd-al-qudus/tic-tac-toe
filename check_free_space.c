#include "tic_tac_toe.h"
/**
 * check_free_space - check for free spaces on the board
 * @board: board to check
 * Return: 0 on false and >1 on true
 */
int check_free_space(char board[3][3])
{
	int freeSpaces, i, j;

	freeSpaces = 9;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (board[i][j] != ' ')
				freeSpaces--;
		}
	}
	return (freeSpaces);
}
