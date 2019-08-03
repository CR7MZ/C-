#ifndef _SLIST_H_
#define _SLIST_H_
#include<stdio.h>
typedef int SLTDataType;

typedef struct SListNode {
	SLTDataType data;
	struct SListNode* next;
}SListNode;

void SListInit(SListNode** pphead);//初始化

void SListDestory(SListNode** pphead);//摧毁

SListNode* BuySListNode(SLTDataType x);//创造一个节点

void SListPushFront(SListNode** pphead, SLTDataType x);//头插

void SListPopFront(SListNode** pphead);//头删

void SListInsertAfter(SListNode* pos, SLTDataType x);//后插

void SListEraseAfter(SListNode* pos);//后删

SListNode* SListFind(SListNode* phead, SLTDataType x);//查节点

void SListRemoveAll(SListNode** pphead, SLTDataType x);//删除数据为X的所有节点。

void SListRemove(SListNode** pphead, SLTDataType x);//删除一个节点

void SListPrint(SListNode* phead);//打印

void SListReverse(SListNode **pphead);//翻转链表第一种方法
void SListReverse2(SListNode **pphead);//翻转链表第二种方法
#endif /*_SLIST_H_*/