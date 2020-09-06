#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include"game.h"
void InitBoard(char board[ROWS][COLS], int rows,int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//打印列号
	for (i = 0; i <= col; i++)
	{
		//打印行号
		printf("%d", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c", board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count != 0)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x + 1][y - 1] - 8 * '0';
}
int In(char show[ROWS][COLS], int x, int y, int row, int col)
{
	if (x <= row && x >= 1 && y <= col && y >= 1 && show[x][y] == '*')
		return 1;
	else
		return 0;
}
void Recursion(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y, int row, int col)
{
	if (get_mine_count(mine, x, y) == 0 && show[x][y] == '*')
	{
		show[x][y] = '0';
		if (In(show, x + 1, y, row, col) == 1)
			Recursion(mine, show, x + 1, y, row, col);
		if (In(show, x + 1, y + 1, row, col) == 1)
			Recursion(mine, show, x + 1, y + 1, row, col);
		if (In(show, x + 1, y - 1, row, col) == 1)
			Recursion(mine, show, x + 1, y - 1, row, col);
		if (In(show, x, y + 1, row, col) == 1)
			Recursion(mine, show, x, y + 1, row, col);
		if (In(show, x - 1, y + 1, row, col) == 1)
			Recursion(mine, show, x - 1, y + 1, row, col);
		if (In(show, x - 1, y, row, col) == 1)
			Recursion(mine, show, x - 1, y, row, col);
		if (In(show, x - 1, y - 1, row, col) == 1)
			Recursion(mine, show, x - 1, y - 1, row, col);
	}
	else
	{
		show[x][y] = get_mine_count(mine, x, y) + '0';
	}
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS],int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col - EASY_COUNT)
	{
		printf("请输入排查雷的坐标：>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row&&y >= 1 && y <= col)

		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				Recursion(mine,show,x, y,row,col);
				DisplayBoard(show, row, col);
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，成功了\n");
	}
}

