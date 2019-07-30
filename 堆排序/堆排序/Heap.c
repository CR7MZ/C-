#include "Heap.h"
#include <stdio.h>

void swap(HPDataType*a, HPDataType*b)
{
	HPDataType tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
void DownAdjust(Heap*hp, int n)
{
	int cur = n;
	while (cur * 2 + 1 < hp->_size)
	{
		if (hp->_data[cur] < hp->_data[cur * 2 + 1])
		{
			if (cur * 2 + 2>hp->_size||hp->_data[cur*2+1]>=hp->_data[cur*2+2])
			{
				swap(&hp->_data[cur], &hp->_data[cur * 2 + 1]);
				cur = cur * 2 + 1;
			}
			else
			{
				swap(&hp->_data[cur], &hp->_data[cur * 2 + 2]);
				cur = cur * 2 + 2;
			}
		}
		else if (cur*2+2<hp->_size&&hp->_data[cur]<hp->_data[cur*2+2])
		{
			swap(&hp->_data[cur], &hp->_data[cur * 2 + 2]);
			cur = cur * 2 + 2;
		}
		else
		{
			break;
		}
	}
}
void HeapInit(Heap* hp, HPDataType* a, int n)
{
	hp->_capacity = MAXSIZE > n ? MAXSIZE : n;
	hp->_size = n;
	hp->_data = (HPDataType*)malloc(sizeof(HPDataType)*hp->_capacity);
	memcpy(hp->_data, a, sizeof(HPDataType)*n);
	int i;
	for (i = n / 2 - 1; i >= 0; i--)
	{
		DownAdjust(hp, i);
	}
}
void HeapDestory(Heap* hp)
{
	if (hp->_data)
	{
		free(hp->_data);
		hp->_data = NULL;
		hp->_size = hp->_capacity = 0;
	}
}
void HeapPush(Heap* hp, HPDataType x)
{
	HPDataType cur = hp->_size;
	if (cur == hp->_capacity)
	{
		hp->_capacity *= 2;
		hp->_data = (HPDataType*)realloc(hp->_data, hp->_capacity*sizeof(HPDataType));
	}
	hp->_data[cur] = x;
	hp->_size++;
	while (cur)
	{
		if (hp->_data[cur] > hp->_data[(cur - 1)/2])
		{
			swap(&hp->_data[cur], &hp->_data[(cur - 1) / 2]);
			cur = (cur - 1) / 2;
		}
		else
		{
			break;
		}
	}
}
void HeapPop(Heap* hp)
{
	swap(hp->_data, hp->_data + hp->_size - 1);
	hp->_size--;
	DownAdjust(hp, 0);
}
HPDataType HeapTop(Heap* hp)
{
	if (hp->_size == 0)
	{
		return;
	}
	return hp->_data[0];
}
int HeapSize(Heap* hp)
{
	return hp->_size;
}
int HeapEmpty(Heap* hp)
{
	return hp->_size == 0;
}
void HeapPrint(Heap *hp)
{
	int i;
	int tag = 0;
	int tmp = 1;
	for (i = 0; i < hp->_size; i++)
	{
		printf("%d", hp->_data[i]);
		if (i == tag)
		{
			putchar('\n');
			tmp *= 2;
			tag += tmp;
		}
	}

}
void HeapSort(Heap *hp)
{
	int tmp = hp->_size;
	while (hp->_size > 1)
	{
		HeapPop(hp);
	}
	hp->_size = tmp;
}