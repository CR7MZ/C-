#include"slist.h"
int main()
{
	SListNode *list;
     SListInit(&list);
	 SListPushFront(&list, 8);
	 SListPushFront(&list, 4);
	 SListPushFront(&list, 9);
	 SListPushFront(&list, 5);
	 SListPushFront(&list, 7);
	 //SListPopFront(&list);
	 //SListPopFront(&list);
	 //SListInsertAfter(SListFind(list, 5),6);
	 //SListEraseAfter(SListFind(list, 5));
	 //SListRemoveAll(&list, 9);
	 //SListRemove(&list, 9);
	 SListReverse(&list);
	 SListPrint(list);
	 SListDestory(&list);
	 system("pause");
	return  0;
}
