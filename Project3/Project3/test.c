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
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	//0x��ָ16����λ��һ��ʮ����������ʾһ4��bitλ����Ϣ��a��ʾ10->1010
//	//�ڴ�������16���ƴ洢����
//	//�ڴ��е��Ŵ油�루��00000014��Ϊ14000000��
//	//��ˣ��洢��ģʽ����ָ���ݵĵ�λ�������ڴ�ĸߵ�ַ�У������ݵĸ�λ���������ڴ�ĵ͵�ַ�У�
//	//С�ˣ��洢��ģʽ����ָ�ʹ�ͣ��ߴ�ߡ�
//	//�ڴ���С��ģʽ
//	return 0;
//}

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int i = 0, j = 0;
    *returnSize = 2;
    static int t[2] = { 0 };
    for (i = 0; i < numsSize - 1; i++)
    {
        for (j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                t[0] = j;
                t[1] = i;
                return &t;
            }
        }
    }
    return 0;
}