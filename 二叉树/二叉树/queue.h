#ifndef _QUEUE_H_
#define _QUEUE_H_
#include"Btree.h"

typedef BTNode* QuDataType;
typedef struct QueueNode
{
	struct QueueNode* _next;
	QuDataType _data;
}QueueNode;
typedef struct Queue
{
	QueueNode* _front; // ��ͷ
	QueueNode* _rear; // ��β
}Queue;
void QueueInit(Queue* pphead);
void QueueDestory(Queue* pphead);
QueueNode* BuyQueueNode(QuDataType x);
void QueuePush(Queue* pq, QuDataType x);
void QueuePop(Queue* pq);
QuDataType QueueFront(Queue* pq);
//QUDataType QueueBack(Queue* pq);
int QueueEmpty(Queue* pq);
//int QueueSize(Queue* pq);
#endif /*_QUEUE_H_*/