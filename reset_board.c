#include "tic_tac_toe.h"
/**
 * reset_board - reset the game board to default
 * This function clears the move on the game board
 * and reset to default
 * @board: board to clear
 * Return: void
 */
void reset_board(char board[3][3])
{
	int i, j, length;

	length = sizeof(board[0]) / sizeof(char);
	for (i = 0; i < length; i++)
	{
		for (j = 0; j < length; j++)
		{
			board[i][j] = ' ';
		}
	}
}
