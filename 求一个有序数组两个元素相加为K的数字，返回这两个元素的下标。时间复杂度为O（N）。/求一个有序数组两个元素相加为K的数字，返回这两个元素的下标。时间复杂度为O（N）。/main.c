#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>//����˼·����������һ���������飬˵����һ��Ԫ�ص����һ���ǵ����ġ�
//������ָ��ֱ�ָ���һ��Ԫ�غ����һ��Ԫ�أ�������ָ����ָ��Ԫ�ص���ֵ֮�ʹ���k��
//�� j�C��Ҳ����ָ�����һ��Ԫ�ص�ָ�룩������ֵ֮��С��k���� i++��Ҳ����ָ���һ��Ԫ�ص�ָ�룩
int test(int* arr,int len,int* num1,int* num2,int k)
{
	int i=0;
	int j = len - 1;
	while (i < j)
	{
		if ((arr[i] + arr[j])>k)
		{
			j--;
		}
		else if ((arr[i] + arr[j]) < k)
		{
			i++;
		}
		else
		{
			*num1 = i;
			*num2 = j;
			break;
		}
	}
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int k = 0;
	int i = 0;
	int j = 0;
	scanf("%d", &k);
	test(arr, len, &i, &j,k);
	printf("���������±�ֱ��ǣ�%d %d", i, j);
	system("pause");
	return 0;
}