#include "Heap.h"
#include<stdio.h>
#define ARRSIZE(a) (sizeof(a)/sizeof(a[0]))
int main()
{
	Heap hp;
	int a[] = { 1, 6, 8, 4, 9, 5, 7 };
	HeapInit(&hp, a, ARRSIZE(a));//�Զѵĳ�ʼ��
	/*memcpy(a, hp._data, ARRSIZE(a) * sizeof(HPDataType));
	int i;
	for (i = 0; i < ARRSIZE(a); i++)
	{
		printf("%d ", a[i]);
	}
	putchar('\n');�����������ÿ������*/
	HeapPush(&hp, 10);//�ڶԵĺ�������һ������Ȼ��������µ�����
	HeapPop(&hp);//���ѵĵ�һ���������һ�����滻��Ȼ�����һ��������ɾ����������������ɾ����һ������
	HeapPrint(&hp);//�����
	HeapDestory(&hp);
	system("pause");
	return 0;
}