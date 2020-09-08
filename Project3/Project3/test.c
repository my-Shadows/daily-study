//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	//0x是指16进制位，一个十六进制数表示一4个bit位的信息如a表示10->1010
//	//内存中是用16进制存储补码
//	//内存中倒着存补码（如00000014存为14000000）
//	//大端（存储）模式，是指数据的地位保存在内存的高地址中，而数据的高位，保存在内存的低地址中；
//	//小端（存储）模式，是指低存低，高存高。
//	//内存是小端模式
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