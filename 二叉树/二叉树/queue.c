#include"queue.h"
#include <stdio.h>
#include<stdlib.h>
#include<math.h>

void QueueInit(Queue* pq)
{
	pq->_front=pq->_rear= NULL;
}
void QueueDestory(Queue* pq)
{
	if (pq->_front == NULL)
	{
		return;
	}
		while (pq->_front)
	{
		QueuePop(pq);
	}
}
QueueNode* BuyQueueNode(QuDataType x)
{
	QueueNode*res = (QueueNode*)malloc(sizeof(QueueNode));
	res->_next = NULL;
	res->_data = x;
	return res;
}
void QueuePush(Queue* pq, QuDataType x)
{
	QueueNode*cur = BuyQueueNode(x);
	if (pq->_front == NULL)
	{
		pq->_front = pq->_rear = cur;
	}
	else
	{
		pq->_rear->_next = cur;
		pq->_rear = cur;
	}
}
void QueuePop(Queue* pq)
{
	QuDataType*cur = pq->_front->_next;
	if (pq->_front == NULL)
	{
		return;
	}
	QueueNode* tmp = pq->_front->_next;
	free(pq->_front);
	pq->_front = tmp;
}
QuDataType QueueFront(Queue* pq)
{

	return pq->_front->_data;
}
int QueueEmpty(Queue* pq)
{
	return pq->_front == NULL;
}
/*QUDataType QueueBack(Queue* pq)
{
	if (pq->_rear = pq->_front)
	{
		return (QUDataType)0;
	}
	return pq->_rear->_data;
}*/
