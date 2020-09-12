#include<stdio.h>
//int count_one_bits(int a)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i<=31; i++)
//	{
//		
//		if (((a >> i)&1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//9   1001
//8   1000
//    1000
//7   0111
//    0000
int count_one_bits(int a)
{
	int count = 0;
	while (a != 0)
	{
		count++;
		a = (a & (a - 1));
	}
	return count;
}
int main()
{
	int a = 10;//1001
	printf("%d", count_one_bits(a));
	return 0;
}
//int main()
//{
//	char* p = "ancsda";
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	return 0;
//}