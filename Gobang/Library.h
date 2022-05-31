#define row 13
#define col 13

typedef struct coordinate
{
	int x;
	int y;
} coordinate;

void InitialBoard (char board[row][col]);
void DisplayBoard (char board[row][col]);
void Computerplay (char board[row][col]);
void Humanplay (char board[row][col]);
void Firstplayer (char board[row][col]);
void Secondplayer (char board[row][col]);
char IsWin (char board[row][col]);
void PrintWinner (char win);
void save (coordinate co);
void Replay (char win);