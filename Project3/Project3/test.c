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