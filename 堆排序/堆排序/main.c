#include "Heap.h"
#include<stdio.h>
#define ARRSIZE(a) (sizeof(a)/sizeof(a[0]))
int main()
{
	Heap hp;
	int a[] = { 1, 6, 8, 4, 9, 5, 7 };
	HeapInit(&hp, a, ARRSIZE(a));//对堆的初始化
	/*memcpy(a, hp._data, ARRSIZE(a) * sizeof(HPDataType));
	int i;
	for (i = 0; i < ARRSIZE(a); i++)
	{
		printf("%d ", a[i]);
	}
	putchar('\n');逐个输出数组的每个数；*/
	HeapPush(&hp, 10);//在对的后面输入一个数，然后进行向下调整。
	HeapPop(&hp);//将堆的第一个数和最后一个数替换，然后将最后一个数进行删除，这样就满足了删除第一个数。
	HeapPrint(&hp);//输出堆
	HeapDestory(&hp);
	system("pause");
	return 0;
}