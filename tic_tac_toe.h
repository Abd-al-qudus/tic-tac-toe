#ifndef __TIC_TAC_TOE__
#define __TIC_TAC_TOE__

/*include header files needed*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <unistd.h>

/* game board and move */
extern char board[3][3];
extern const char COMPUTER;
extern const char PLAYER;

/*functions required in the game*/
void print_board(char board[3][3]);
void reset_board(char board[3][3]);
int check_free_space(char board[3][3]);
void player_move(char board[3][3]);
char check_winner(char board[3][3]);
void computer_move(char board[3][3]);
void print_winner(char check);

#endif
