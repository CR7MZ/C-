#include<stdio.h>//要求时间复杂度 O(N)，空间复杂度 O(1)。因此不能使用排序的方法，也不能使用额外的标记数组。
//对于这种数组元素在[0, n - 1] 范围内的问题，可以将值为 i 的元素调整到第 i 个位置上进行求解。
void  My_swap(int* arr, int i, int j)
{
	int tmp = arr[i];
	arr[i] = arr[j];
	arr[j] = tmp;
}
int  CheckNumber(int* arr,int len)
{
	if (arr == NULL || len < 1)
	{
		return;
	}
	for (int i = 0;i < len; i++)
	{
		while (arr[i] != i)
		{
			if (arr[i] == arr[arr[i]])
			{
				return 1;
			}
			My_swap(arr, i, arr[i]);
		}
	}
	return 0;
}

int main()
{
	int arr[] = { 2, 3, 1, 0, 2, 5 };	
	int len = sizeof(arr) / sizeof(arr[0]);
	if (CheckNumber(arr, len))
		printf("有重复的数字！");
	else
		printf("没有！");
	system("pause");
	return 0;
}