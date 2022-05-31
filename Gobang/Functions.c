#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

#include "Library.h"

bool IsFull (char board[row][col]);

void InitialBoard(char board[row][col])
{
	for (int i = 0; i < row; i++)
	{
    	for (int j = 0; j < col; j++)
    		board[i][j] = ' ';
	}
}

void DisplayBoard(char board[row][col])
{
	printf("\t");
	for (int j = 0; j < col; j++)
	{
		if(j < 10)
			printf("  %d ", j + 1);
		else
			printf(" %d ", j + 1);
	}
	printf("\n");
	printf("\t");
	for (int j = 0; j < col; j++)
	{
		printf(" ___");
	}
	printf("\n");
	for (int i = 0; i < row; i++)
	{
		printf("%d\t", i + 1);
    	for (int j = 0; j < col; j++)
    	{
    		printf("|");
    		printf("_%c_", board[i][j]);
    	}
    	printf("|");
    	printf("\n");
	}
}

void Humanplay(char board[row][col])
{
	coordinate co;

	printf("Please enter coordinate: ");
	while (1)
	{
		scanf("%d%d", &co.x, &co.y);
		if (co.x >= 1 && co.x <= row && co.y >= 1 && co.y <= col && board[co.x - 1][co.y - 1] == ' ')
		{
			board[co.x - 1][co.y - 1] = 'o';
			save (co);
			break;
		}
		else
			printf("Invalid coordinate. Please re-enter: ");
	}
	DisplayBoard(board);
}

void Firstplayer (char board[row][col])
{
	coordinate co;
	printf("First player. Please enter coordinate: ");
	while (1)
	{
		scanf("%d%d", &co.x, &co.y);
		if (co.x >= 1 && co.x <= row && co.y >= 1 && co.y <= col && board[co.x - 1][co.y - 1] == ' ')
		{
			board[co.x - 1][co.y - 1] = 'o';
			save (co);
			break;
		}
		else
			printf("Invalid coordinate. Please re-enter: ");
	}
	DisplayBoard(board);
}

void Secondplayer (char board[row][col])
{
	coordinate co;
	printf("Second player. Please enter coordinate: ");
	while (1)
	{
		scanf("%d%d", &co.x, &co.y);
		if (co.x >= 1 && co.x <= row && co.y >= 1 && co.y <= col && board[co.x - 1][co.y - 1] == ' ')
		{
			board[co.x - 1][co.y - 1] = 'x';
			save (co);
			break;
		}
		else
			printf("Invalid coordinate. Please re-enter: ");
	}
	DisplayBoard(board);
}

char IsWin(char board[row][col])
{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j + 4 < col; j++)
			{
				char check = board[i][j];
				if (board[i][j+1] == check && board[i][j+2] == check && board[i][j+3] == check && board[i][j+4] == check && board[i][j] != ' ')
					return check;
			}
		}
		for (int j = 0; j < col; j++)
		{
			for (int i = 0; i + 4 < row; i++)
			{
				char check = board[i][j];
				if (board[i+1][j] == check && board[i+2][j] == check && board[i+3][j] == check && board[i+4][j] == check && board[i][j] != ' ')
					return check;
			}
		}
		for (int i = 0; i + 4 < row; i++)
		{
			for (int j = 0; j + 4 < col; j++)
			{
				char check = board[i][j];
				if (board[i+1][j+1] == check && board[i+2][j+2] == check && board[i+3][j+3] == check && board[i+4][j+4] == check && board[i][j] != ' ')
					return check;
			}
		}
		for (int i = 0; i + 4 < row; i++)
		{
			for (int j = col - 1; j - 4 >= 0; j--)
			{
				char check = board[i][j];
				if (board[i + 1][j - 1] == check && board[i + 2][j - 2] == check && board[i + 3][j - 3] == check && board[i + 4][j - 4] == check && board[i][j] != ' ')
					return check;
			}
		}

	if (IsFull(board))
		return 'd';
	else
		return 'c';
}

bool IsFull(char board[row][col])
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return false;
		}
	}
	return true;
}

void PrintWinner(char win)
{
	if (win == 'o')
		printf("'o' player won\n");
	else if (win == 'x')
		printf("'x' player won\n");
	else if (win == 'd')
		printf("This game is tied\n");
}

void save (coordinate co)
{
	FILE *record;
	record = fopen ("playhistory.txt", "a");
	fwrite (&co, sizeof(coordinate), 1, record);
	fclose (record);
}

void Replay(char win)
{
	coordinate co;
	FILE *record;
	record = fopen ("playhistory.txt", "r");
	int count = 0;
	
	printf("The game finished. Here is the record of the game:\n");
	while (fread(&co, sizeof(coordinate), 1, record) != 0)
	{
		if (count % 2 == 0)
		{
			printf("The coordinate offensive position entered is: ");
			printf("%d %d\n", co.x, co.y);
		}
		else
		{
			printf("The coordinate defensive position entered is: ");
			printf("%d %d\n", co.x, co.y);
		}
		count++;
	}
	printf("The total number of moves is: %d\n", count);
	printf("Final result is: ");
	PrintWinner (win);
	fclose (record);
}