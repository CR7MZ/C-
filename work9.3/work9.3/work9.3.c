//�Ƚ������ִ�С������ʹ�ô��ڡ�С�ڡ�if����λ����
//����ͨ�������������Ϊ��������Ϊ�������жϡ�
#include<stdio.h>
int max(int a, int b)
{
	return ((a - b) >> 31) ? -1 : (a - b ? 1 : 0);//�Ƚ�a-b����a-b�����ƶ�31������λ������λ��
	//�������λΪ1��a<b���������ٿ�a-b�Ƿ�>0��������a>b,��a-b=0��a=b��
}
int main()
{
	int a = 30;
	int b = 20;
	int ret=max(a, b);
	printf("%d", ret);
	system("pause");
	return 0;
}