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
//	Stu s1 = { "С��",10 };
//	printf("%s", s1.name);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("�Ǻ�\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}
//void my_strcpy(char* b, char* a)//6��
//{
//	int i = 0;
//	for (i = 0; *(a+i) != '\0'; i++)
//	{
//		*(b + i) = *(a + i);
//	}
//	*(b + i) = *(a + i);
//}
//void my_strcpy(char* a, char* b)//7��
//{
//	while (*a++ = *b++)
//	{
//		;
//	}
//}
//void my_strcpy(char* a, char* b)//7.5��
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
//		printf("���δ���\n");
//	}
//}
#include<assert.h>
//void my_strcpy(char* a, char* b)//8��
//{
//	assert(a != NULL);//����
//	assert(b != NULL);
//	while (*a++ = *b++)
//	{
//		;
//	}
//}
//void my_strcpy(char* a, const char* b)//9��(const ����ָ�������*���ʱ�����ε���*p��Ҳ����˵������ͨ��p���ı�*p��num����ֵ��const����*�ұ�ʱ�����ε���ָ�����p��Ҳ����p���ܱ��ı� such as int * const p���˴�const��ֹ��ֵʱд���Ҳ��ױ�����
//{
//	assert(a != NULL);//����
//	assert(b != NULL);
//	while (*a++ = *b++)
//	{
//		;
//	}
//}
//char* my_strcpy(char* a, char* b)//10��
//{
//	char* ret = a;
//	assert(a != NULL);//����
//	assert(b != NULL);
// 	while (*a++ = *b++)//��bָ������鿽����aָ������飨������/0����
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
	assert(str != NULL);//��ָ֤�����Ч��

}
void main()
{
	char arr[] = "2123123";
	int len = my_strlen(arr);
	printf("%d", len);
}
//25 199.50