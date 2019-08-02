#include"seqlist.h"

int main()
{
	SeqList test;
	SeqListInit(&test, 10);
	SeqListPushBack(&test, 5);
	SeqListPushBack(&test, 8);
	SeqListPushBack(&test, 7);
	SeqListPushBack(&test, 8);
	SeqListPushBack(&test, 7);
	SeqListPushBack(&test, 7);
	SeqListRemoveAll(&test, 7);
	SeqListPrint(&test);
	SeqListDestory(&test);
	system("pause");
	return 0;
}