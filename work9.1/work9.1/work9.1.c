#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
unsigned int reverse_bit(unsigned int value)
{
	unsigned int sum = 0;
	for (int i = 0; i < 32; i++)
	{
		sum += ((value >> i) & 1)*pow((double)2, 31 - i);//不可能直接翻转，先进行右移操作，
		//每一次右移按位与1，如果是1乘以最大一位是1所代表的十进制数字，
	//得出第一数，最后将这些数加起来输出即可。
	}
	return sum;
}
int main()
{
	unsigned int ret=reverse_bit(25);
	printf("%u\n", ret);
	system("pause");
	return 0;
}