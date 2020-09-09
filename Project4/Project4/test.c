
//#include<stdio.h>
//int check_sys()
//{
//	int i = 1;
//	return (*(char*)&i);
//}
//void main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("Ð¡¶Ë\n");
//	}
//	else
//	{
//		printf("´ó¶Ë\n");
//	}
//}
#include<stdio.h>
//void main()
//{
//	char a = -128;
//	//011000001100110011001100110011001100110010000000
//	char b = 128;
//	printf("%u %u", a, b);
//}
int main()
{
	unsigned int i;
	for (i = 9; i >= 0; i--)
	{
		printf("%u", i);
	}
	return 0;
}
//p28 20.40
