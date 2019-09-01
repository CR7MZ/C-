#include<stdio.h>
#include<stdlib.h>
//此题思路应该把数组都异或起来
//1、将整个数组进行异或，异或的结果就是两个不一样的数字异或的结果。
//2、求出异或结果当中，从右往左数第pos位为1的下标pos。
//3、将数组以第pos位为1或者不为1分为两个子数组。
//4、将两个子数组分别进行异或。
void Func(int*arr, int len, int* px, int* py)
{
	int i = 0;
	int sum = 0;
	int pos = 0;
	for ( i = 0; i < len; i++)
	{
		sum ^= arr[i];
	}
	for ( i = 0; i < len; i++)
	{
		if (((sum >> i) & 1) == 1)
		{
			pos = i;
		}
	}
	for (i = 0; i < len; i++)
	{
		if (((arr[i] >> pos) & 1) == 1)
		{
			*px =*px^ arr[i];
		}
		else
		{
			*py = *py^ arr[i];
		}
	}
}
int main()
{
	int arr[] = { 1, 1, 3, 4, 9, 4, 9, 2, 6, 3 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int x = 0;
	int y = 0;
	Func(arr, size, &x, &y);
	printf("%d,%d",x,y);
	system("pause");
	return 0;
}