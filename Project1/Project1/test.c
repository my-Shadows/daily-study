#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
#include<string.h>
#include<time.h>
//打印100到200间的素数
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int tmp = 0;
//		int p = 0;
//		for (tmp = 3; tmp <= sqrt(i); tmp++)
//		{
//			p = 0;
//			if (i % tmp == 0)
//			{
//				p++;
//				break;
//			}
//			
//		}
//		if (p == 0)
//		{
//			printf("%d\n", i);
//		}
//		
//	}
//	return 0;
//}
//
//void mul(int a)
//{
//	int i = 0;
//	for (i = 1; i <= a; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %3d\t", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	mul(a);
//	return 0;
//} 
//void change(int* pa, int* pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//void main()
//{
//	int a = 0;
//	int b = 5;
//	change(&a, &b);
//	printf("%d %d", a, b);
//}
//int Is_leap(int year)
//{
//	if (year % 4 == 0 && year%100!=0)
//	{
//		return 1;
//	}
//	else
//	{
//		if (year % 400 == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//void main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (Is_leap(year) == 1)
//	{
//		printf("%d是闰年", year);
//	}
//}
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i <= sz - 1; i++)
//	{
//		arr[i] = i+1;
//	}
//}
//void empty(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i <= sz - 1; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	for (;left <= right;left++,right--)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//	}
//}
//void main()
//{
//	int arr1[] = { 1,2,365,4,32 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	empty(arr1, sz);
//	init(arr1, sz);
//	
//	reverse(arr1, sz);
//	
//}
//int Is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i != 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//void main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (Is_prime(n) == 1)
//	{
//		printf("%d是素数", n);
//	}
//	else
//		printf("%d不是素数", n);
//int Fib(int n)
//{
//	if (n >= 3)
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//	else
//	{
//		if (n == 2)
//		{
//			return 1;
//		}
//		else
//		{
//			return 0;
//		}
//	}
//
//		
//}
//int Fib(int n)
//{
//	int c = 1, a = 0, b = 1;
//	int i = 0;
//	for (i = 3; i <= n; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
//
//}
//void main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", Fib(n));
//}
//int my_pow(int n, int k)
//{
//	if (k >= 2)
//	{
//		return n * my_pow(n, k - 1);
//	}
//	else
//	{
//		return n;
//	}
//}
//void main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n,&k);
//	
//	printf("%d", my_pow(n, k));
//}
//int DigitSum(int n)
//{
//	if (n == 0)
//	{
//		return 0;
//	}
//	else
//	{
//		
//		return DigitSum(n / 10) + n % 10;
//	}
//}
//void main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", DigitSum(n));
//}
//void reverse_string(char* string)
//{
//    if (*string == '\0')
//    {
//        return;
//    }
//    reverse_string(string + 1);
//    printf("%c", *string);
//
//    
//}
//int main()
//{
//    char string[] = "abcdefghijk";
//    reverse_string(string);
//    printf("\n");
//    return 0;
//}

//int my_strlen(char* pch)
//{
//	
//	/*if (*pch == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1+my_strlen(pch + 1);
//	}*/
//	/*int n = 0;
//	while (*pch != '\0')
//	{
//		n++;
//		pch++;
//	}
//	return n;*/
//
//}
//void main()
//{
//	char ch[] = ("asdj");
//	printf("%d", my_strlen(ch));
//}
//int Fac(int n)
//{
//	/*if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fac(n - 1) * n;
//	}*/
//	int b = 0;
//	for (b=1; n >= 1; n--)
//	{
//		b = b * n;
//		
//	}
//	return b;
//}
/*void main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d", Fac(n));
}*/
//void Show(int a)
//{
//	if (a == 0)
//	{
//		return;
//	}
//	else
//	{
//		Show(a / 10);
//		printf("%d\t", a % 10);
//	}
//}
//void main()
//{
//	int a = 123;
//	Show(a);
//}
#include"game.h"
void game(int* win)
{
	
	char Mineboard[ROWS][COLS] = { '0' };
	char Showboard[ROWS][COLS] = { '0' };
	InitBoard(Mineboard, ROWS, COLS,'0');
	InitBoard(Showboard, ROWS, COLS,'?');
	Setboard(Mineboard, ROW, COL);
	Displayboard(Showboard, ROW, COL);
	Findboard(Mineboard, Showboard, ROW, COL,win);
}
void menu()
{
	printf("************欢迎来到我的游戏*********\n");
	printf("*************1.play 0.exit***********\n");
	printf("*************************************\n");
	int a = 0;
	int win = 0;
	scanf("%d", &a);
	if (a == 1)
	{
		while (1)
		{
			printf("呀哈！是扫雷游戏！\n");
			game(&win);
			printf("1.再次游玩 0.什么破游戏，老子不想玩了\n");
			scanf("%d", &a);
			if (a == 0&&win==0)
			{
				printf("垃圾，给爷爬\n");
				break;
			}
			if (a == 0 && win != 0)
			{
				printf("您慢走，感谢您的游玩\n");
				break;
			}
		}
	}
	else
	{
		printf("一次都不玩你tm来干啥\n");
	}
	
}
void main()
{
	srand((unsigned)time(NULL));
	menu();

}