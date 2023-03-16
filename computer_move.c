#include "tic_tac_toe.h"
/**
 * computer_move - make the random computer move
 * @board: game board;
 * Return: void
 */
void computer_move(char board[3][3])
{
	int x, y;
	char COMPUTER;

	COMPUTER = 'Y';
	srand(time(0));
	if (check_free_space(board) > 0)
	{
		do {
			x = rand() % 3;
			y = rand() % 3;
		} while (board[x][y] != ' ');
		board[x][y] = COMPUTER;
	}
	else
	{
		print_winner(' ');
	}
}
