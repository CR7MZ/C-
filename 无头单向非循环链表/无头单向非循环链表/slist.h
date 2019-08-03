#ifndef _SLIST_H_
#define _SLIST_H_
#include<stdio.h>
typedef int SLTDataType;

typedef struct SListNode {
	SLTDataType data;
	struct SListNode* next;
}SListNode;

void SListInit(SListNode** pphead);//��ʼ��

void SListDestory(SListNode** pphead);//�ݻ�

SListNode* BuySListNode(SLTDataType x);//����һ���ڵ�

void SListPushFront(SListNode** pphead, SLTDataType x);//ͷ��

void SListPopFront(SListNode** pphead);//ͷɾ

void SListInsertAfter(SListNode* pos, SLTDataType x);//���

void SListEraseAfter(SListNode* pos);//��ɾ

SListNode* SListFind(SListNode* phead, SLTDataType x);//��ڵ�

void SListRemoveAll(SListNode** pphead, SLTDataType x);//ɾ������ΪX�����нڵ㡣

void SListRemove(SListNode** pphead, SLTDataType x);//ɾ��һ���ڵ�

void SListPrint(SListNode* phead);//��ӡ

void SListReverse(SListNode **pphead);//��ת�����һ�ַ���
void SListReverse2(SListNode **pphead);//��ת����ڶ��ַ���
#endif /*_SLIST_H_*/