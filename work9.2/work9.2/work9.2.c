#include<stdio.h>
//����Ҫ�� & ^  �����м���ƽ��ֵ������1λ<<�൱�ڳ�2,����1λ>>�൱�ڳ�2��
int main()
{
	int a = 10;
	int b = 20;
	int avg = 0;
	avg = (a&b) + (a^b)>>1;
	printf("%d", avg);
	system("pause");
	return 0;
}