#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

#include "Library.h"

void oneplayeroff();
void oneplayerdef();
void twoplayer();
void game();

int main(void)
{
	game();
	return 0;
}

void game()
{
	FILE *record;
	record = fopen ("playhistory.txt", "w");
	fclose (record);
	srand((unsigned int)time(NULL));

	mode();
	printf("Please select: ");
	int input;
	do
	{
		scanf("%d", &input);
		switch (input)
		{
			case 0:
				printf("Quit the game\n");
				break;
			case 1:
				position();
				printf("Please select position: ");
				int pos;
				do
				{
					scanf("%d", &pos);
					switch (pos)
					{
						case 0:
							printf("You choose offensive position\n");
							printf("Game start\n");
							oneplayeroff();
							break;
						case 1:
							printf("You choose defensive position\n");
							printf("Game start\n");
							oneplayerdef();
							break;
						default:
							printf("Invalid position. Please re-enter: ");
							break;
					}
				}
				while (pos != 0 && pos != 1);
				break;
			case 2:
				printf("Game start\n");
				twoplayer();
				break;
			default:
				printf("Invalid selection. Please re-enter: ");
				break;
		}
	}
	while (input > 3);
}

void mode()
{
	printf("0. Exit\n");
	printf("1. Play with computer\n");
	printf("2. Play with other player\n");
}

void position()
{
	printf("0. Offensive position\n");
	printf("1. Defensive position\n");
}

void oneplayeroff()
{
	char board[row][col];
	InitialBoard(board);
	DisplayBoard(board);
	char win = 'c';

	while (1)
	{
		Humanplay (board);
		win = IsWin (board);
		if (win != 'c')
			break;
		
		Computerplay (board);
		DisplayBoard (board);
		win = IsWin (board);
		if (win != 'c')
			break;
	}
	PrintWinner (win);
	Replay (win);
}

void oneplayerdef()
{
	char board[row][col];
	InitialBoard (board);
	DisplayBoard (board);
	char win = 'c';

	while (1)
	{
		Computerplay (board);
		DisplayBoard (board);
		win = IsWin (board);
		if (win != 'c')
			break;
		
		Humanplay (board);
		win = IsWin (board);
		if (win != 'c')
			break;
		
	}
	PrintWinner (win);
	Replay (win);
}
void twoplayer()
{
	char board[row][col];
	InitialBoard (board);
	DisplayBoard (board);
	char win = 'c';

	while (1)
	{
		Firstplayer (board);
		win = IsWin (board);
		if (win != 'c')
			break;
		
		Secondplayer (board);
		win = IsWin (board);
		if (win != 'c')
			break;
		
	}
	PrintWinner (win);
	Replay (win);
}