#include<stdio.h>//Ҫ��ʱ�临�Ӷ� O(N)���ռ临�Ӷ� O(1)����˲���ʹ������ķ�����Ҳ����ʹ�ö���ı�����顣
//������������Ԫ����[0, n - 1] ��Χ�ڵ����⣬���Խ�ֵΪ i ��Ԫ�ص������� i ��λ���Ͻ�����⡣
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
		printf("���ظ������֣�");
	else
		printf("û�У�");
	system("pause");
	return 0;
}