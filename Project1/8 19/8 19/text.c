#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include"game.h"
void menu()
{
	printf("*************************\n");
	printf("***********1. play ******\n");
	printf("***********0. exit ******\n");
	printf("*************************\n");
}
void game()
{
	//�׵���Ϣ�洢
	//
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*'); 
	
	DisplayBoard(show, ROW, COL);
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	FindMine(mine, show, ROW, COL);
	DisplayBoard(mine, ROW, COL);
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}
int main()
{
	srand((unsigned)time(NULL));
	test();
	return 0;
}