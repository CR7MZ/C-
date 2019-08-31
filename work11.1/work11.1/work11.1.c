#include<stdio.h>
#include<assert.h>
#include<string.h>
void reverse(char*left, char*right)
{
	while (left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void  left_move(char*str,int k)//����Ҫ��������ת�������������һ����Ҫ��������K����ĸ���ã�
//�ڶ�����ʣ�µ���ĸ���ã��������������á�
{
	int len = strlen(str);
	//�����Լ��
	assert(str != NULL&&k <= strlen(str));
	if (str == NULL||k > strlen(str))
	{
		return;
	}
	reverse(str, str + k - 1);
	reverse(str + k, str + len - 1);
	reverse(str, str + len - 1);
}
int main()
{
	char str[] = "abcdef";//��ʱ������*str="ABCDE"����Ϊ���޷����ı䡣
	left_move(str, 5);
	printf("%s\n", str);
	system("pause");
	return 0;
}