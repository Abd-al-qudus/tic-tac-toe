#include "tic_tac_toe.h"
#include <string.h>
/**
 * main - driver unit to call other function,
 * It calls other function and ensure the
 * correct flow of the game.
 * Return: success always (0)
 */
int main(void)
{
	char winner, board[3][3];

	do {
		winner = ' ';
		reset_board(board);
		while (winner == ' ' && check_free_space(board) != 0)
		{
			print_board(board);
			player_move(board);
			winner = check_winner(board);
			if (winner != ' ' || check_free_space(board) == 0)
				break;
			computer_move(board);
			winner = check_winner(board);
			if (winner != ' ' || check_free_space(board) == 0)
				break;
		}
		print_board(board);
		print_winner(winner);
		printf("\nPRESS ENTER TO QUIT AND ANY OTHER KEY TO CONTINUE: ");
	} while (getchar() != '\n' && getchar() != EOF);

	printf("\nTHANKS FOR PLAYING\n");
	return (0);
}
