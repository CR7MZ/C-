#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
bool check(int x)
{
	int y = x;
	int tmp = 0;
	if (x == 0)
		return true;
	if (x<0 || (x % 10) == 0)//���Ϊ����������10�ı�����һ�����ǻ�����
		return false;
	while (x)
	{
		tmp = tmp * 10 + (x % 10);
		x /= 10;
	}
	return tmp == y ? true : false;
}
int main()
{
	int num = 0;
	printf("��������һ������");
	scanf("%d", &num);
	if (check(num) ==num )
	{
		printf("�ǻ�����������");
	}
	else
	{
		printf("���ǻ�����������");
	}
	system("pause");
	return 0;
}