#include "tic_tac_toe.h"
/**
 * player_move - prompt the player to make a move
 * @board: game board
 * Return: void
 */
void player_move(char board[3][3])
{
	int x, y;
	char PLAYER, input[20];

	PLAYER = 'X';
	do {
		printf("\nENTER ROW NO(1-3) COL NO(1-3): ");
		fgets(input, sizeof(input), stdin);
		if (!sscanf(input, "%d %d", &x, &y))
		{
			printf("GAME TERMINATED DUE TO INVALID INPUTS\n");
			exit(0);
		}
		x--, y--;
		if (board[x][y] != ' ')
		{
			printf("\nINVALID MOVE\n");
		}
		else
		{
			board[x][y] = PLAYER;
			break;
		}
	} while (board[x][y] != ' ');
}
