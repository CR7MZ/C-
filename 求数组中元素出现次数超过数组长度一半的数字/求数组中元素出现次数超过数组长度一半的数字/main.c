#include<stdio.h>//思路：用快排法找出数组的中位数，应该就是出现最多的数，但需要判断一下。
int Partion(int*a, int left, int right)
{
	int tmp = a[left];
	if (a == NULL)
	{
		return -1;
	}
	while (left < right)
	{
		while (left<right&&a[right] >= tmp)
		{
			right--;
		}
		if (left >= right)
		{
			break;
		}
		else
		{
			a[left] = a[right];
		}
		while (left < right&&a[left] <= tmp)
		{
			left++;
		}
		if (left >= right)
		{
			break;
		}
		else
		{
			a[right] = a[left];
		}
	}
	a[left] = tmp;
	return left;
}
int FindNumIsLots(int* arr, int len)
{
	int mid = len >> 1;
	int start = 0;
	int end = len - 1;
	int result = 0;
	int index = Partion(arr, start, end);
	if (arr == NULL || len < 0)
	{
		return 0;
	}
	while (index != mid)
	{
		if (index>mid)
		{
			end = index - 1;
			index=Partion(arr, start, end);
		}
		else
		{
			start = index + 1;
			index=Partion(arr, start, end);
		}
	}
	 result = arr[mid];
	  //以上数据当中 我们一直认为 数组的中位数就是我们需要找的数字    
	 //但是并不一定数组当中频率最高的数字就是中位数,所以得到这个result    
	 //之后我们还需要判断一下这个数字出现的频率是否为整个长度的一半 .
	if (!CheckNum(arr, result, len))
	{
		result = 0;
	}
	return result;
}
int CheckNum(int* a, int num,int len)
{
	int i = 0;
	int count=0;
	for (i = 0; i < len; i++)
	{
		if (a[i] == num)
		{
			count++;
		}
	}
	if ((count * 2) <= len)
	{
		return 0;
	}
		return 1;	
}
int main()
{
	int a[] = { 1, 2, 2, 2, 2,  9 };
	int len = sizeof(a)/sizeof(a[0]);
	int ret=FindNumIsLots(a, len);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
