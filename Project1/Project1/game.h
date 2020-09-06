#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#define ROWS 11
#define COLS 11 
#define ROW 9//列数
#define COL 9//行数
#define DIF 10
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);
void Setboard(char board[ROWS][COLS], int row, int col);
void Displayboard(char Mineboard[ROWS][COLS], int row, int col);
void Findboard(char Mineboard[ROWS][COLS], char Showboard[ROWS][COLS], int row, int col,int* pwin);
void rac(char Mineboard[ROWS][COLS], char Showboard[ROWS][COLS], int x, int y);
