#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

#include "Library.h"

void Computerplay (char board[row][col])
{
	coordinate co;
	// Go on to the fifth to win
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j + 4 < col; j++)
		{
			if (board[i][j] == ' ' && board[i][j+1] == 'x' && board[i][j+2] == 'x' && board[i][j+3] == 'x' && board[i][j+4] == 'x')
			{
				board[i][j] = 'x';
				co.x = i;
				co.y = j;
				save (co);
				return;
			}
			if (board[i][j] == 'x' && board[i][j+1] == ' ' && board[i][j+2] == 'x' && board[i][j+3] == 'x' && board[i][j+4] == 'x')
			{
				board[i][j+1] = 'x';
				co.x = i;
				co.y = j + 1;
				save (co);
				return;
			}
			if (board[i][j] == 'x' && board[i][j+1] == 'x' && board[i][j+2] == ' ' && board[i][j+3] == 'x' && board[i][j+4] == 'x')
			{
				board[i][j+2] = 'x';
				co.x = i;
				co.y = j + 2;
				save (co);
				return;
			}
			if (board[i][j] == 'x' && board[i][j+1] == 'x' && board[i][j+2] == 'x' && board[i][j+3] == ' ' && board[i][j+4] == 'x')
			{
				board[i][j+3] = 'x';
				co.x = i;
				co.y = j + 3;
				save (co);
				return;
			}
			if (board[i][j] == 'x' && board[i][j+1] == 'x' && board[i][j+2] == 'x' && board[i][j+3] == 'x' && board[i][j+4] == ' ')
			{
				board[i][j+4] = 'x';
				co.x = i;
				co.y = j + 4;
				save (co);
				return;
			}
		}
	}

	for (int j = 0; j < col; j++)
	{
		for (int i = 0; i + 4 < row; i++)
		{
			if (board[i][j] == ' ' && board[i+1][j] == 'x' && board[i+2][j] == 'x' && board[i+3][j] == 'x' && board[i+4][j] == 'x')
			{
				board[i][j] = 'x';
				co.x = i;
				co.y = j;
				save (co);
				return;
			}
			if (board[i][j] == 'x' && board[i+1][j] == ' ' && board[i+2][j] == 'x' && board[i+3][j] == 'x' && board[i+4][j] == 'x')
			{
				board[i+1][j] = 'x';
				co.x = i + 1;
				co.y = j;
				save (co);
				return;
			}
			if (board[i][j] == 'x' && board[i+1][j] == 'x' && board[i+2][j] == ' ' && board[i+3][j] == 'x' && board[i+4][j] == 'x')
			{
				board[i+2][j] = 'x';
				co.x = i + 2;
				co.y = j;
				save (co);
				return;
			}
			if (board[i][j] == 'x' && board[i+1][j] == 'x' && board[i+2][j] == 'x' && board[i+3][j] == ' ' && board[i+4][j] == 'x')
			{
				board[i+3][j] = 'x';
				co.x = i + 3;
				co.y = j;
				save (co);
				return;
			}
			if (board[i][j] == 'x' && board[i+1][j] == 'x' && board[i+2][j] == 'x' && board[i+3][j] == 'x' && board[i+4][j] == ' ')
			{
				board[i+4][j] = 'x';
				co.x = i + 4;
				co.y = j;
				save (co);
				return;
			}
		}
	}

	for (int i = 0; i + 4 < row; i++)
	{
		for (int j = 0; j + 4 < col; j++)
		{
			if (board[i][j] == ' ' && board[i+1][j+1] == 'x' && board[i+2][j+2] == 'x' && board[i+3][j+3] == 'x' && board[i+4][j+4] == 'x')
			{
				board[i][j] = 'x';
				co.x = i;
				co.y = j;
				save (co);
				return;
			}
			if (board[i][j] == 'x' && board[i+1][j+1] == ' ' && board[i+2][j+2] == 'x' && board[i+3][j+3] == 'x' && board[i+4][j+4] == 'x')
			{
				board[i+1][j+1] = 'x';
				co.x = i + 1;
				co.y = j + 1;
				save (co);
				return;
			}
			if (board[i][j] == 'x' && board[i+1][j+1] == 'x' && board[i+2][j+2] == ' ' && board[i+3][j+3] == 'x' && board[i+4][j+4] == 'x')
			{
				board[i+2][j+2] = 'x';
				co.x = i + 2;
				co.y = j + 2;
				save (co);
				return;
			}
			if (board[i][j] == 'x' && board[i+1][j+1] == 'x' && board[i+2][j+2] == 'x' && board[i+3][j+3] == ' ' && board[i+4][j+4] == 'x')
			{
				board[i+3][j+3] = 'x';
				co.x = i + 3;
				co.y = j + 3;
				save (co);
				return;
			}
			if (board[i][j] == 'x' && board[i+1][j+1] == 'x' && board[i+2][j+2] == 'x' && board[i+3][j+3] == 'x' && board[i+4][j+4] == ' ')
			{
				board[i+4][j+4] = 'x';
				co.x = i + 4;
				co.y = j + 4;
				save (co);
				return;
			}
		}
	}

	for (int i = 0; i + 4 < row; i++)
	{
		for (int j = col - 1; j - 4 >= 0; j--)
		{
			if (board[i][j] == ' ' && board[i+1][j-1] == 'x' && board[i+2][j-2] == 'x' && board[i+3][j-3] == 'x' && board[i+4][j-4] == 'x')
			{
				board[i][j] = 'x';
				co.x = i;
				co.y = j;
				save (co);
				return;
			}
			if (board[i][j] == 'x' && board[i+1][j-1] == ' ' && board[i+2][j-2] == 'x' && board[i+3][j-3] == 'x' && board[i+4][j-4] == 'x')
			{
				board[i+1][j-1] = 'x';
				co.x = i + 1;
				co.y = j - 1;
				save (co);
				return;
			}
			if (board[i][j] == 'x' && board[i+1][j-1] == 'x' && board[i+2][j-2] == ' ' && board[i+3][j-3] == 'x' && board[i+4][j-4] == 'x')
			{
				board[i+2][j-2] = 'x';
				co.x = i + 2;
				co.y = j - 2;
				save (co);
				return;
			}
			if (board[i][j] == 'x' && board[i+1][j-1] == 'x' && board[i+2][j-2] == 'x' && board[i+3][j-3] == ' ' && board[i+4][j-4] == 'x')
			{
				board[i+3][j-3] = 'x';
				co.x = i + 3;
				co.y = j - 3;
				save (co);
				return;
			}
			if (board[i][j] == 'x' && board[i+1][j-1] == 'x' && board[i+2][j-2] == 'x' && board[i+3][j-3] == 'x' && board[i+4][j-4] == ' ')
			{
				board[i+4][j-4] = 'x';
				co.x = i + 4;
				co.y = j - 4;
				save (co);
				return;
			}
		}
	}

	// Block 5
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j + 4 < col; j++)
		{
			if (board[i][j] == 'x' && board[i][j+1] == 'o' && board[i][j+2] == 'o' && board[i][j+3] == 'o' && board[i][j+4] == 'o' && board[i][j+5] == ' ')
			{
				board[i][j+5] = 'x';
				co.x = i;
				co.y = j + 5;
				save (co);
				return;
			}
			if (board[i][j] == ' ' && board[i][j+1] == 'o' && board[i][j+2] == 'o' && board[i][j+3] == 'o' && board[i][j+4] == 'o' && board[i][j+5] == 'x')
			{
				board[i][j] = 'x';
				co.x = i;
				co.y = j;
				save (co);
				return;
			}
			if (board[i][j] == 'o' && board[i][j+1] == ' ' && board[i][j+2] == 'o' && board[i][j+3] == 'o' && board[i][j+4] == 'o')
			{
				board[i][j+1] = 'x';
				co.x = i;
				co.y = j + 1;
				save (co);
				return;
			}
			if (board[i][j] == 'o' && board[i][j+1] == 'o' && board[i][j+2] == ' ' && board[i][j+3] == 'o' && board[i][j+4] == 'o')
			{
				board[i][j+2] = 'x';
				co.x = i;
				co.y = j + 2;
				save (co);
				return;
			}
			if (board[i][j] == 'o' && board[i][j+1] == 'o' && board[i][j+2] == 'o' && board[i][j+3] == ' ' && board[i][j+4] == 'o')
			{
				board[i][j+3] = 'x';
				co.x = i;
				co.y = j + 3;
				save (co);
				return;
			}
		}
	}

	for (int j = 0; j < col; j++)
	{
		for (int i = 0; i + 4 < row; i++)
		{
			if (board[i][j] == 'x' && board[i+1][j] == 'o' && board[i+2][j] == 'o' && board[i+3][j] == 'o' && board[i+4][j] == 'o' && board[i+5][j] == ' ')
			{
				board[i+5][j] = 'x';
				co.x = i + 5;
				co.y = j;
				save (co);
				return;
			}
			if (board[i][j] == ' ' && board[i+1][j] == 'o' && board[i+2][j] == 'o' && board[i+3][j] == 'o' && board[i+4][j] == 'o' && board[i+5][j] == 'x')
			{
				board[i][j] = 'x';
				co.x = i;
				co.y = j;
				save (co);
				return;
			}
			if (board[i][j] == 'o' && board[i+1][j] == ' ' && board[i+2][j] == 'o' && board[i+3][j] == 'o' && board[i+4][j] == 'o')
			{
				board[i+1][j] = 'x';
				co.x = i + 1;
				co.y = j;
				save (co);
				return;
			}
			if (board[i][j] == 'o' && board[i+1][j] == 'o' && board[i+2][j] == ' ' && board[i+3][j] == 'o' && board[i+4][j] == 'o')
			{
				board[i+2][j] = 'x';
				co.x = i + 2;
				co.y = j;
				save (co);
				return;
			}
			if (board[i][j] == 'o' && board[i+1][j] == 'o' && board[i+2][j] == 'o' && board[i+3][j] == ' ' && board[i+4][j] == 'o')
			{
				board[i+3][j] = 'x';
				co.x = i + 3;
				co.y = j;
				save (co);
				return;
			}
		}
	}

	for (int i = 0; i + 4 < row; i++)
	{
		for (int j = 0; j + 4 < col; j++)
		{
			if (board[i][j] == 'x' && board[i+1][j+1] == 'o' && board[i+2][j+2] == 'o' && board[i+3][j+3] == 'o' && board[i+4][j+4] == 'o' && board[i+5][j+5] == ' ')
			{
				board[i+5][j+5] = 'x';
				co.x = i + 5;
				co.y = j + 5;
				save (co);
				return;
			}
			if (board[i][j] == ' ' && board[i+1][j+1] == 'o' && board[i+2][j+2] == 'o' && board[i+3][j+3] == 'o' && board[i+4][j+4] == 'o' && board[i+5][j+5] == 'x')
			{
				board[i][j] = 'x';
				co.x = i;
				co.y = j;
				save (co);
				return;
			}
			if (board[i][j] == 'o' && board[i+1][j+1] == ' ' && board[i+2][j+2] == 'o' && board[i+3][j+3] == 'o' && board[i+4][j+4] == 'o')
			{
				board[i+1][j+1] = 'x';
				co.x = i + 1;
				co.y = j + 1;
				save (co);
				return;
			}
			if (board[i][j] == 'o' && board[i+1][j+1] == 'o' && board[i+2][j+2] == ' ' && board[i+3][j+3] == 'o' && board[i+4][j+4] == 'o')
			{
				board[i+2][j+2] = 'x';
				co.x = i + 2;
				co.y = j + 2;
				save (co);
				return;
			}
			if (board[i][j] == 'o' && board[i+1][j+1] == 'o' && board[i+2][j+2] == 'o' && board[i+3][j+3] == ' ' && board[i+4][j+4] == 'o')
			{
				board[i+3][j+3] = 'x';
				co.x = i + 3;
				co.y = j + 3;
				save (co);
				return;
			}
		}
	}

	for (int i = 0; i + 4 < row; i++)
	{
		for (int j = col - 1; j - 4 >= 0; j--)
		{
			if (board[i][j] == 'x' && board[i+1][j-1] == 'o' && board[i+2][j-2] == 'o' && board[i+3][j-3] == 'o' && board[i+4][j-4] == 'o' && board[i+5][j-5] == ' ')
			{
				board[i+5][j-5] = 'x';
				co.x = i + 5;
				co.y = j - 5;
				save (co);
				return;
			}
			if (board[i][j] == ' ' && board[i+1][j-1] == 'o' && board[i+2][j-2] == 'o' && board[i+3][j-3] == 'o' && board[i+4][j-4] == 'o' && board[i+5][j-5] == 'x')
			{
				board[i][j] = 'x';
				co.x = i;
				co.y = j;
				save (co);
				return;
			}
			if (board[i][j] == 'o' && board[i+1][j-1] == ' ' && board[i+2][j-2] == 'o' && board[i+3][j-3] == 'o' && board[i+4][j-4] == 'o')
			{
				board[i+1][j-1] = 'x';
				co.x = i + 1;
				co.y = j - 1;
				save (co);
				return;
			}
			if (board[i][j] == 'o' && board[i+1][j-1] == 'o' && board[i+2][j-2] == ' ' && board[i+3][j-3] == 'o' && board[i+4][j-4] == 'o')
			{
				board[i+2][j-2] = 'x';
				co.x = i + 2;
				co.y = j - 2;
				save (co);
				return;
			}
			if (board[i][j] == 'o' && board[i+1][j-1] == 'o' && board[i+2][j-2] == 'o' && board[i+3][j-3] == ' ' && board[i+4][j-4] == 'o')
			{
				board[i+3][j-3] = 'x';
				co.x = i + 3;
				co.y = j - 3;
				save (co);
				return;
			}
		}
	}

		// Go for the forth
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j + 3 < col; j++)
		{
			if (board[i][j] == ' ' && board[i][j+1] == 'x' && board[i][j+2] == 'x' && board[i][j+3] == 'x')
			{
				board[i][j] = 'x';
				co.x = i;
				co.y = j;
				save (co);
				return;
			}
			if (board[i][j] == 'x' && board[i][j+1] == ' ' && board[i][j+2] == 'x' && board[i][j+3] == 'x')
			{
				board[i][j+1] = 'x';
				co.x = i;
				co.y = j + 1;
				save (co);
				return;
			}
			if (board[i][j] == 'x' && board[i][j+1] == 'x' && board[i][j+2] == ' ' && board[i][j+3] == 'x')
			{
				board[i][j+2] = 'x';
				co.x = i;
				co.y = j + 2;
				save (co);
				return;
			}
			if (board[i][j] == 'x' && board[i][j+1] == 'x' && board[i][j+2] == 'x' && board[i][j+3] == ' ')
			{
				board[i][j+3] = 'x';
				co.x = i;
				co.y = j + 3;
				save (co);
				return;
			}
		}
	}

	for (int j = 0; j < col; j++)
	{
		for (int i = 0; i + 3 < row; i++)
		{
			if (board[i][j] == ' ' && board[i+1][j] == 'x' && board[i+2][j] == 'x' && board[i+3][j] == 'x')
			{
				board[i][j] = 'x';
				co.x = i;
				co.y = j;
				save (co);
				return;
			}
			if (board[i][j] == 'x' && board[i+1][j] == ' ' && board[i+2][j] == 'x' && board[i+3][j] == 'x')
			{
				board[i+1][j] = 'x';
				co.x = i + 1;
				co.y = j;
				save (co);
				return;
			}
			if (board[i][j] == 'x' && board[i+1][j] == 'x' && board[i+2][j] == ' ' && board[i+3][j] == 'x')
			{
				board[i+2][j] = 'x';
				co.x = i + 2;
				co.y = j;
				save (co);
				return;
			}
			if (board[i][j] == 'x' && board[i+1][j] == 'x' && board[i+2][j] == 'x' && board[i+3][j] == ' ')
			{
				board[i+3][j] = 'x';
				co.x = i + 3;
				co.y = j;
				save (co);
				return;
			}
		}
	}

	for (int i = 0; i + 3 < row; i++)
	{
		for (int j = 0; j + 3 < col; j++)
		{
			if (board[i][j] == ' ' && board[i+1][j+1] == 'x' && board[i+2][j+2] == 'x' && board[i+3][j+3] == 'x')
			{
				board[i][j] = 'x';
				co.x = i;
				co.y = j;
				save (co);
				return;
			}
			if (board[i][j] == 'x' && board[i+1][j+1] == ' ' && board[i+2][j+2] == 'x' && board[i+3][j+3] == 'x')
			{
				board[i+1][j+1] = 'x';
				co.x = i + 1;
				co.y = j + 1;
				save (co);
				return;
			}
			if (board[i][j] == 'x' && board[i+1][j+1] == 'x' && board[i+2][j+2] == ' ' && board[i+3][j+3] == 'x')
			{
				board[i+2][j+2] = 'x';
				co.x = i + 2;
				co.y = j + 2;
				save (co);
				return;
			}
			if (board[i][j] == 'x' && board[i+1][j+1] == 'x' && board[i+2][j+2] == 'x' && board[i+3][j+3] == ' ')
			{
				board[i+3][j+3] = 'x';
				co.x = i + 3;
				co.y = j + 3;
				save (co);
				return;
			}
		}
	}

	for (int i = 0; i + 3 < row; i++)
	{
		for (int j = col - 1; j - 3 >= 0; j--)
		{
			if (board[i][j] == ' ' && board[i+1][j-1] == 'x' && board[i+2][j-2] == 'x' && board[i+3][j-3] == 'x')
			{
				board[i][j] = 'x';
				co.x = i;
				co.y = j;
				save (co);
				return;
			}
			if (board[i][j] == 'x' && board[i+1][j-1] == ' ' && board[i+2][j-2] == 'x' && board[i+3][j-3] == 'x')
			{
				board[i+1][j-1] = 'x';
				co.x = i + 1;
				co.y = j - 1;
				save (co);
				return;
			}
			if (board[i][j] == 'x' && board[i+1][j-1] == 'x' && board[i+2][j-2] == ' ' && board[i+3][j-3] == 'x')
			{
				board[i+2][j-2] = 'x';
				co.x = i + 2;
				co.y = j - 2;
				save (co);
				return;
			}
			if (board[i][j] == 'x' && board[i+1][j-1] == 'x' && board[i+2][j-2] == 'x' && board[i+3][j-3] == ' ')
			{
				board[i+3][j-3] = 'x';
				co.x = i + 3;
				co.y = j - 3;
				save (co);
				return;
			}
		}
	}

	// Block 4
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j + 3 < col; j++)
		{
			if (board[i][j] == ' ' && board[i][j+1] == 'o' && board[i][j+2] == 'o' && board[i][j+3] == 'o')
			{
				board[i][j] = 'x';
				co.x = i;
				co.y = j;
				save (co);
				return;
			}
			if (board[i][j] == 'o' && board[i][j+1] == ' ' && board[i][j+2] == 'o' && board[i][j+3] == 'o')
			{
				board[i][j+1] = 'x';
				co.x = i;
				co.y = j + 1;
				save (co);
				return;
			}
			if (board[i][j] == 'o' && board[i][j+1] == 'o' && board[i][j+2] == ' ' && board[i][j+3] == 'o')
			{
				board[i][j+2] = 'x';
				co.x = i;
				co.y = j + 2;
				save (co);
				return;
			}
			if (board[i][j] == 'o' && board[i][j+1] == 'o' && board[i][j+2] == 'o' && board[i][j+3] == ' ')
			{
				board[i][j+3] = 'x';
				co.x = i;
				co.y = j + 3;
				save (co);
				return;
			}
		}
	}

	for (int j = 0; j < col; j++)
	{
		for (int i = 0; i + 3 < row; i++)
		{
			if (board[i][j] == ' ' && board[i+1][j] == 'o' && board[i+2][j] == 'o' && board[i+3][j] == 'o')
			{
				board[i][j] = 'x';
				co.x = i;
				co.y = j;
				save (co);
				return;
			}
			if (board[i][j] == 'o' && board[i+1][j] == ' ' && board[i+2][j] == 'o' && board[i+3][j] == 'o')
			{
				board[i+1][j] = 'x';
				co.x = i + 1;
				co.y = j;
				save (co);
				return;
			}
			if (board[i][j] == 'o' && board[i+1][j] == 'o' && board[i+2][j] == ' ' && board[i+3][j] == 'o')
			{
				board[i+2][j] = 'x';
				co.x = i + 2;
				co.y = j;
				save (co);
				return;
			}
			if (board[i][j] == 'o' && board[i+1][j] == 'o' && board[i+2][j] == 'o' && board[i+3][j] == ' ')
			{
				board[i+3][j] = 'x';
				co.x = i + 3;
				co.y = j;
				save (co);
				return;
			}
		}
	}

	for (int i = 0; i + 3 < row; i++)
	{
		for (int j = 0; j + 3 < col; j++)
		{
			if (board[i][j] == ' ' && board[i+1][j+1] == 'o' && board[i+2][j+2] == 'o' && board[i+3][j+3] == 'o')
			{
				board[i][j] = 'x';
				co.x = i;
				co.y = j;
				save (co);
				return;
			}
			if (board[i][j] == 'o' && board[i+1][j+1] == ' ' && board[i+2][j+2] == 'o' && board[i+3][j+3] == 'o')
			{
				board[i+1][j+1] = 'x';
				co.x = i + 1;
				co.y = j + 1;
				save (co);
				return;
			}
			if (board[i][j] == 'o' && board[i+1][j+1] == 'o' && board[i+2][j+2] == ' ' && board[i+3][j+3] == 'o')
			{
				board[i+2][j+2] = 'x';
				co.x = i + 2;
				co.y = j + 2;
				save (co);
				return;
			}
			if (board[i][j] == 'o' && board[i+1][j+1] == 'o' && board[i+2][j+2] == 'o' && board[i+3][j+3] == ' ')
			{
				board[i+3][j+3] = 'x';
				co.x = i + 3;
				co.y = j + 3;
				save (co);
				return;
			}
		}
	}

	for (int i = 0; i + 3 < row; i++)
	{
		for (int j = col - 1; j - 3 >= 0; j--)
		{
			if (board[i][j] == ' ' && board[i+1][j-1] == 'o' && board[i+2][j-2] == 'o' && board[i+3][j-3] == 'o')
			{
				board[i][j] = 'x';
				co.x = i;
				co.y = j;
				save (co);
				return;
			}
			if (board[i][j] == 'o' && board[i+1][j-1] == ' ' && board[i+2][j-2] == 'o' && board[i+3][j-3] == 'o')
			{
				board[i+1][j-1] = 'x';
				co.x = i + 1;
				co.y = j - 1;
				save (co);
				return;
			}
			if (board[i][j] == 'o' && board[i+1][j-1] == 'o' && board[i+2][j-2] == ' ' && board[i+3][j-3] == 'o')
			{
				board[i+2][j-2] = 'x';
				co.x = i + 2;
				co.y = j - 2;
				save (co);
				return;
			}
			if (board[i][j] == 'o' && board[i+1][j-1] == 'o' && board[i+2][j-2] == 'o' && board[i+3][j-3] == ' ')
			{
				board[i+3][j-3] = 'x';
				co.x = i + 3;
				co.y = j - 3;
				save (co);
				return;
			}
		}
	}

	// Go for the third
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j + 2 < col; j++)
		{
			if (board[i][j] == ' ' && board[i][j+1] == 'x' && board[i][j+2] == 'x')
			{
				board[i][j] = 'x';
				co.x = i;
				co.y = j;
				save (co);
				return;
			}
			if (board[i][j] == 'x' && board[i][j+1] == ' ' && board[i][j+2] == 'x')
			{
				board[i][j+1] = 'x';
				co.x = i;
				co.y = j + 1;
				save (co);
				return;
			}
			if (board[i][j] == 'x' && board[i][j+1] == 'x' && board[i][j+2] == ' ')
			{
				board[i][j+2] = 'x';
				co.x = i;
				co.y = j + 2;
				save (co);
				return;
			}
		}
	}

	for (int j = 0; j < col; j++)
	{
		for (int i = 0; i + 2 < row; i++)
		{
			if (board[i][j] == ' ' && board[i+1][j] == 'x' && board[i+2][j] == 'x')
			{
				board[i][j] = 'x';
				co.x = i;
				co.y = j;
				save (co);
				return;
			}
			if (board[i][j] == 'x' && board[i+1][j] == ' ' && board[i+2][j] == 'x')
			{
				board[i+1][j] = 'x';
				co.x = i + 1;
				co.y = j;
				save (co);
				return;
			}
			if (board[i][j] == 'x' && board[i+1][j] == 'x' && board[i+2][j] == ' ')
			{
				board[i+2][j] = 'x';
				co.x = i + 2;
				co.y = j;
				save (co);
				return;
			}
		}
	}

	for (int i = 0; i + 2 < row; i++)
	{
		for (int j = 0; j + 2 < col; j++)
		{
			if (board[i][j] == ' ' && board[i+1][j+1] == 'x' && board[i+2][j+2] == 'x')
			{
				board[i][j] = 'x';
				co.x = i;
				co.y = j;
				save (co);
				return;
			}
			if (board[i][j] == 'x' && board[i+1][j+1] == ' ' && board[i+2][j+2] == 'x')
			{
				board[i+1][j+1] = 'x';
				co.x = i + 1;
				co.y = j + 1;
				save (co);
				return;
			}
			if (board[i][j] == 'x' && board[i+1][j+1] == 'x' && board[i+2][j+2] == ' ')
			{
				board[i+2][j+2] = 'x';
				co.x = i + 2;
				co.y = j + 2;
				save (co);
				return;
			}
		}
	}

	for (int i = 0; i + 2 < row; i++)
	{
		for (int j = col - 1; j - 2 >= 0; j--)
		{
			if (board[i][j] == ' ' && board[i+1][j-1] == 'x' && board[i+2][j-2] == 'x')
			{
				board[i][j] = 'x';
				co.x = i;
				co.y = j;
				save (co);
				return;
			}
			if (board[i][j] == 'x' && board[i+1][j-1] == ' ' && board[i+2][j-2] == 'x')
			{
				board[i+1][j-1] = 'x';
				co.x = i + 1;
				co.y = j - 1;
				save (co);
				return;
			}
			if (board[i][j] == 'x' && board[i+1][j-1] == 'x' && board[i+2][j-2] == ' ')
			{
				board[i+2][j-2] = 'x';
				co.x = i + 2;
				co.y = j - 2;
				save (co);
				return;
			}
		}
	}

	// Go for the 2nd
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j + 1 < col; j++)
		{
			if (board[i][j] == ' ' && board[i][j+1] == 'x')
			{
				board[i][j] = 'x';
				co.x = i;
				co.y = j;
				save (co);
				return;
			}
			if (board[i][j] == 'x' && board[i][j+1] == ' ')
			{
				board[i][j+1] = 'x';
				co.x = i;
				co.y = j + 1;
				save (co);
				return;
			}
		}
	}

	for (int j = 0; j < col; j++)
	{
		for (int i = 0; i + 1 < row; i++)
		{
			if (board[i][j] == ' ' && board[i+1][j] == 'x')
			{
				board[i][j] = 'x';
				co.x = i;
				co.y = j;
				save (co);
				return;
			}
			if (board[i][j] == 'x' && board[i+1][j] == ' ' && i + 2 != row - 1)
			{
				board[i+1][j] = 'x';
				co.x = i + 1;
				co.y = j;
				save (co);
				return;
			}
		}
	}

	for (int i = 0; i + 1 < row; i++)
	{
		for (int j = 0; j + 1 < col; j++)
		{
			if (board[i][j] == ' ' && board[i+1][j+1] == 'x')
			{
				board[i][j] = 'x';
				co.x = i;
				co.y = j;
				save (co);
				return;
			}
			if (board[i][j] == 'x' && board[i+1][j+1] == ' ')
			{
				board[i+1][j+1] = 'x';
				co.x = i + 1;
				co.y = j + 1;
				save (co);
				return;
			}
		}
	}

	for (int i = 0; i + 1 < row; i++)
	{
		for (int j = col - 1; j - 1 >= 0; j--)
		{
			if (board[i][j] == ' ' && board[i+1][j-1] == 'x')
			{
				board[i][j] = 'x';
				co.x = i;
				co.y = j;
				save (co);
				return;
			}
			if (board[i][j] == 'x' && board[i+1][j-1] == ' ')
			{
				board[i+1][j-1] = 'x';
				co.x = i + 1;
				co.y = j - 1;
				save (co);
				return;
			}
		}
	}

	while (1)
	{
		co.x = rand() % row;
		co.y = rand() % col;
		if(board[co.x - 1][co.y - 1] == ' ')
		{
			board[co.x - 1][co.y - 1] = 'x';
			save (co);
			return;
		}
	}
}