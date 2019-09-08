#include<stdio.h>
int Partion(int*a, int left,int right )//¿ìËÙÅÅĞò
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
		if (left>=right)
		{
			break ;
		}
		else
		{
			a[left] = a[right];
		}
		while (left < right&&a[left] <= tmp)
		{
			left++;
		}
		if (left>=right)
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
void min(int *a, int len, int k)
{
	int start = 0;
	int end = len - 1;
	int index = Partion(a, start, end);
	int mid = (start + end) / 2;
	if (a == NULL || len < 1)
	{
		return;
	}
	if (a == NULL || len < 0)
	{
		return 0;
	}
	while (index != mid)
	{
		if (index>mid)
		{
			end = index - 1;
			index=Partion(a, start, end);
		}
		else
		{
			start = index + 1;
			index=Partion(a, start, end);
		}
	}
	for (int i = 0; i < k; i++)
	{
		printf("%d ", a[i]);
	}
}
int main()
{
	int a[] = { 53, 99, 36, 58, 89, 4, 2, 6, 11, 3, 5 };
	int len = sizeof(a) / sizeof(a[0]);
	min(a, len,3);
	system("pause");
	return 0;
}