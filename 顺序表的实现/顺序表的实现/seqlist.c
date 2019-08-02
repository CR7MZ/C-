#include"seqlist.h"

void SeqListInit(SeqList* psl, size_t capacity)
{
	psl->array = (SLDataType*)calloc(capacity, sizeof(SLDataType));
	psl->capicity = capacity;
	psl->size = 0;
}
void SeqListDestory(SeqList* psl)
{
	if (psl->array)
	{
		free(psl->array);
		psl->array = NULL;
		psl->size = 0;
		psl->capicity = 0;
	}
}
void CheckCapacity(SeqList* psl)
{
	if (psl->size >= psl->capicity)
	{
		psl->capicity *= 2;
		psl->array = (SLDataType*)realloc(psl->array, psl->capicity*sizeof(SLDataType));
	}
}
void SeqListPushBack(SeqList* psl, SLDataType x)
{
	CheckCapacity(psl);
	psl->array[psl->size] = x;
	psl->size++;
}
void SeqListPopBack(SeqList* psl)
{
	psl->size--;
}
void SeqListPushFront(SeqList* psl, SLDataType x)
{
	CheckCapacity(psl);
	int i;
	for (i = psl->size - 1; i >= 0; i--)
	{
		psl->array[i + 1] = psl->array[i];
	}
	psl->array[0] = x;
	psl->size++;
}
void SeqListPopFront(SeqList* psl)
{
	int i;
	for (i = 0; i < psl->size - 1; i++)
	{
		psl->array[i] = psl->array[i + 1];	
	}
	psl->size--;
}
int SeqListFind(SeqList* psl, SLDataType x)
{
	int i;
	for (i = 0; i < psl->size; i++)
	{
		if (psl->array[i] == x)
		{
			return  i;
		}
	}
	return -1;
}
void SeqListInsert(SeqList* psl, size_t pos, SLDataType x)
{
	CheckCapacity(psl);
	int i;
	for (i = psl->size - 1; i >= pos; i--)
	{
		psl->array[i + 1] = psl->array[i];
	}
	psl->array[pos] = x;
	psl->size++;
}
void SeqListErase(SeqList* psl, size_t pos)
{
	int i;
	for (i = pos; i <= psl->size - 1; i++)
	{
		psl->array[i] = psl->array[i + 1];
	}
	psl->size--;
}
void SeqListRemove(SeqList* psl, SLDataType x)
{
	SeqListErase(psl, SeqListFind(psl, x));
}
void SeqListModify(SeqList* psl, size_t pos, SLDataType x)
{
	psl->array[pos] = x;
}
void SeqListPrint(SeqList* psl)
{
	int i;
	for (i = 0; i <= psl->size - 1; i++)
	{
		printf("%d",psl->array[i]);
	}
	putchar('\n');
}
void SeqListBubbleSort(SeqList* psl)
{
	int i;
	int j;
	SLDataType tmp;
	for (i = 0; i < psl->size - 1; i++)
	{
		for (j = 0; j < psl->size - 1 - i; j++)
		{
			if (psl->array[j]>psl->array[j + 1])
			{
				tmp = psl->array[j];
				psl->array[j] = psl->array[j + 1];
				psl->array[j + 1] = tmp;
			}
		}
	}
}
int SeqListBinaryFind(SeqList* psl, SLDataType x)
{
	int start=0;
	int end=psl->size-1;
	int mid;
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (psl->array[mid] < x)
		{
			start = mid + 1;
		}
		if (psl->array[mid] > x)
		{
			end = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
void SeqListRemoveAll(SeqList* psl, SLDataType x)
{
	SLDataType*tmp = (SLDataType*)calloc(psl->capicity,sizeof(SLDataType));
	int i,j;
	for (i = 0, j = 0; i < psl->size; i++)
	{
		if (psl->array[i] != x)
		{
			tmp[j] = psl->array[i];
			j++;
		}
	}
	free(psl->array);
	psl->array = tmp;
	psl->size = j;
}