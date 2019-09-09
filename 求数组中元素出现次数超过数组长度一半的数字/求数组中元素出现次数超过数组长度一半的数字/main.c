#include<stdio.h>//˼·���ÿ��ŷ��ҳ��������λ����Ӧ�þ��ǳ���������������Ҫ�ж�һ�¡�
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
	  //�������ݵ��� ����һֱ��Ϊ �������λ������������Ҫ�ҵ�����    
	 //���ǲ���һ�����鵱��Ƶ����ߵ����־�����λ��,���Եõ����result    
	 //֮�����ǻ���Ҫ�ж�һ��������ֳ��ֵ�Ƶ���Ƿ�Ϊ�������ȵ�һ�� .
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
