#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() //�����
{
	int a, b;
	while (1)
	{
		printf("��������������");
		scanf("%d%d", &a, &b);
		while (a != b)
		{
			if (a > b)
			{
				a = a - b;
			}
			else
			{
				b = b - a;
			}
		}
		printf("���������Ϊ��%d\n", a);
	}
	system("pause");
	return 0;
}

int main()// ��ٷ�
{
	int a, b, c;
	while (1)
	{
		printf("��������������");
		scanf("%d%d", &a, &b);
		c = (a > b) ? b : a;
		while (a%c != 0 || b%c != 0)
		{
			c--;
		}
		printf("���Լ��Ϊ%d",c);
	}
	system("pause");
	return 0;
}

int main()//շת�����
{
	int a, b, c;
	printf("��������������");
	scanf("%d%d", &a, &b);
	c = a%b;
	while (c != 0)
	{
		a = b;
		b = c;
		c = a%b;
	}
	printf("���Լ��Ϊ��%d", b);
	system("pause");
	return 0;
}