#include "tic_tac_toe.h"
/**
 * check_winner - check whether there is a winner or not
 * @board: game board to check
 * Return: winner character if winner not null
 */
char check_winner(char board[3][3])
{
	int i;

	/*check row wise winner*/
	for (i = 0; i < 3; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
			return (board[0][i]);
	}
	/*check column wise winner*/
	for (i = 0; i < 3; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
			return (board[i][0]);
	}
	/* check diagonal wise winner */
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
		return (board[0][0]);
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2])
		return (board[2][0]);
	return (' ');
}
