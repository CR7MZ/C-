#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Find_num(int arr[], int size, int num)
{
	int left = 0;
	int right = size - 1;
	while (left <= right){
		int  mid = (left + right) / 2;
		if (num > arr[mid]){
			left = mid + 1;
		}
		else if (num < arr[mid]){
			right = mid - 1;
		}
		else{
			return mid;
		}
	}
	return -1;
}

	int main()
	{
		int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
		int size = sizeof(arr) / sizeof(arr[0]);
		printf("请输入一个数：");
		int num = 0;
		scanf("%d", &num);
		int res = Find_num(arr, size, num);
		printf("%d", res);
		system("pause");
		return 0;
	}