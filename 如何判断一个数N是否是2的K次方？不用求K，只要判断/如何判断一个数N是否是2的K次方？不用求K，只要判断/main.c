#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void CheckIsNumber(int n)//��λ�����������ͨ��2��K�η����ǿ��Է��֣����n & n-1��0��
                         //��ôn����2��K�η�����֮����2��K�η���
{
	int m = n - 1;
	if ((m&n) == 0)
	{
		printf("��2��K�η���\n");
	}
	else
		printf("����2��K�η���\n");
}
int main()
{
	CheckIsNumber(8);
	CheckIsNumber(7);
	CheckIsNumber(6);
	CheckIsNumber(99);
	system("pause");
	return 0;
}