#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
unsigned int reverse_bit(unsigned int value)
{
	unsigned int sum = 0;
	for (int i = 0; i < 32; i++)
	{
		sum += ((value >> i) & 1)*pow((double)2, 31 - i);//������ֱ�ӷ�ת���Ƚ������Ʋ�����
		//ÿһ�����ư�λ��1�������1�������һλ��1�������ʮ�������֣�
	//�ó���һ���������Щ��������������ɡ�
	}
	return sum;
}
int main()
{
	unsigned int ret=reverse_bit(25);
	printf("%u\n", ret);
	system("pause");
	return 0;
}