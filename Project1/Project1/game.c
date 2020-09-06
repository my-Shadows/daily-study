#include"game.h"
#include<stdlib.h>
#include <stdio.h>
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void Setboard(char board[ROWS][COLS], int row, int col)
{
	for (int i = 0; i < DIF; )
	{
		int x = rand() % row + 1, y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			i++;
		}
	}
}
void Displayboard(char board[ROWS][COLS], int row, int col)
{
	for (int i = 0; i <= row; i++)
	{
		printf("%d\t", i);
	}
	for (int j = 1; j <= col; j++)
	{
		printf("\n\n\n\n");
		printf("%d\t", j);
		for (int i = 1; i <= row; i++)
		{
			printf("%c\t", board[i][j]);
		}
	}
	printf("\n___________________________________________________________________________________\n\n\n\n");
}
int _count(char Mineboard[ROWS][COLS], int x, int y)
{
	return Mineboard[x - 1][y] + Mineboard[x - 1][y - 1] + Mineboard[x - 1][y + 1]
		+ Mineboard[x][y - 1] + Mineboard[x][y + 1]
		+ Mineboard[x + 1][y] + Mineboard[x + 1][y - 1] + Mineboard[x + 1][y + 1]
		- 8 * '0';
}
void rac(char Mineboard[ROWS][COLS],char Showboard[ROWS][COLS], int x, int y)
{
	if (_count(Mineboard, x, y) == 0 && Showboard[x][y + 1] == '?')
	{
		Showboard[x][y+1] = _count(Mineboard, x, y+1) + '0';
		rac(Mineboard,Showboard, x, y + 1);
	}
	if (_count(Mineboard, x, y) == 0 &&  Showboard[x][y - 1] == '?')
	{
		Showboard[x][y-1] = _count(Mineboard, x, y-1) + '0';
		rac(Mineboard, Showboard, x, y - 1);
	}
	if (_count(Mineboard, x, y) == 0  && Showboard[x+1][y + 1] == '?')
	{
		Showboard[x+1][y+1] = _count(Mineboard, x+1, y+1) + '0';
		rac(Mineboard, Showboard, x+1, y + 1);
	}
	if (_count(Mineboard, x, y) == 0  && Showboard[x+1][y - 1] == '?')
	{
		Showboard[x+1][y-1] = _count(Mineboard, x+1, y-1) + '0';
		rac(Mineboard, Showboard, x+1, y - 1);
	}
	if (_count(Mineboard, x, y) == 0  && Showboard[x-1][y + 1] == '?')
	{
		Showboard[x-1][y+1] = _count(Mineboard, x-1, y+1) + '0';
		rac(Mineboard, Showboard, x-1, y + 1);
	}
	if (_count(Mineboard, x, y) == 0  && Showboard[x-1][y - 1] == '?')
	{
		Showboard[x-1][y-1] = _count(Mineboard, x-1, y-1) + '0';
		rac(Mineboard, Showboard, x-1, y - 1);
	}
	if (_count(Mineboard, x, y) == 0  && Showboard[x+1][y ] == '?')
	{
		Showboard[x+1][y] = _count(Mineboard, x+1, y) + '0';
		rac(Mineboard, Showboard, x+1, y );
	}
	if (_count(Mineboard, x, y) == 0 && Showboard[x-1][y ] == '?')
	{
		Showboard[x-1][y] = _count(Mineboard, x-1, y) + '0';
		rac(Mineboard, Showboard, x-1, y );
	}
	
}
void Findboard(char Mineboard[ROWS][COLS],char Showboard[ROWS][COLS], int row, int col,int* pwin)
{
	int i = 0;
	while (i < DIF)
	{
		int b = 0;
		printf("1.�Ų���          0.�����\n");
		scanf("%d", &b);
		if (b == 1)
		{
			printf("��������Ҫ�Ų��λ������\n");
			int x = 0;
			int y = 0;
			while (1)
			{
				scanf("%d %d", &x, &y);
				if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
				{
					break;
				}
				else
				{
					printf("�����ʽ���ˣ�484sa���ٸ���һ�λ���\n");
				}
			}
			printf("\n\n\n");
			if (Mineboard[x][y] == '0')
			{
				Showboard[x][y] = _count(Mineboard, x, y) + '0';
				rac(Mineboard, Showboard, x, y);
				Displayboard(Showboard, ROW, COL);
			}


			if (Mineboard[x][y] == '1')
			{
				printf("���⣬��ը�˰�������������ϧϧ\n");
				break;
			}
		}
		else
		{
			printf("���������׵�����\n");
			int x = 0;
			int y = 0;
			while (1)
			{
				scanf("%d %d", &x, &y);
				if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
				{
					break;
				}
				else
				{
					printf("�����ʽ���ˣ�484sa������һ��\n");
				}
			}
			Showboard[x][y] = '@';
			if (Mineboard[x][y] == '1')
			{
				i++;
			}
			Displayboard(Showboard, ROW, COL);


		}
	}
	if (i == DIF)
	{
		*pwin = *pwin + 1;
		printf("�ۣ�����������磬��������\n");
	}
}

