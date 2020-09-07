#define  _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
//int count_one_bits(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//void main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", count_one_bits(n));
//}
//typedef struct Stu
//{
//	char name[20];
//	int age[5];
//} Stu;
//int main()
//{
//	Stu s1 = { "小红",10 };
//	printf("%s", s1.name);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("呵呵\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}
//void my_strcpy(char* b, char* a)//6分
//{
//	int i = 0;
//	for (i = 0; *(a+i) != '\0'; i++)
//	{
//		*(b + i) = *(a + i);
//	}
//	*(b + i) = *(a + i);
//}
//void my_strcpy(char* a, char* b)//7分
//{
//	while (*a++ = *b++)
//	{
//		;
//	}
//}
//void my_strcpy(char* a, char* b)//7.5分
//{
//	if (a != NULL && b != NULL)
//	{
//		while (*a++ = *b++)
//		{
//			;
//		}
//	}
//	else
//	{
//		printf("传参错误\n");
//	}
//}
#include<assert.h>
//void my_strcpy(char* a, char* b)//8分
//{
//	assert(a != NULL);//断言
//	assert(b != NULL);
//	while (*a++ = *b++)
//	{
//		;
//	}
//}
//void my_strcpy(char* a, const char* b)//9分(const 放在指针变量的*左边时，修饰的是*p，也就是说：不能通过p来改变*p（num）的值；const放在*右边时，修饰的是指针变量p：也就是p不能被改变 such as int * const p）此处const防止赋值时写反且不易被发现
//{
//	assert(a != NULL);//断言
//	assert(b != NULL);
//	while (*a++ = *b++)
//	{
//		;
//	}
//}
//char* my_strcpy(char* a, char* b)//10分
//{
//	char* ret = a;
//	assert(a != NULL);//断言
//	assert(b != NULL);
// 	while (*a++ = *b++)//把b指向的数组拷贝到a指向的数组（包括‘/0’）
//	{
//		;
//	}
//	return ret;
//}
//int main()
// {
//	char arr1[] = "123212";
//	char arr2[] = "jasoidjaowj";
//	
//	printf("%s\n", my_strcpy(arr2, arr1));
//	return 0;
//}
#include<assert.h>
int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);//保证指针的有效性

}
void main()
{
	char arr[] = "2123123";
	int len = my_strlen(arr);
	printf("%d", len);
}
//25 199.50