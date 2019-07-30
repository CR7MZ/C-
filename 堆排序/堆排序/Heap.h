#ifndef _HEAP_H_
#define _HEAP_H_ 
#define MAXSIZE 100
typedef int HPDataType;
typedef struct Heap
{
	HPDataType* _data;
	int _size;
	int _capacity;
}Heap;
void HeapInit(Heap* hp, HPDataType* a, int n);
void HeapDestory(Heap* hp);
void HeapPush(Heap* hp, HPDataType x);//从堆后面加一个数，进行向下调整。
void HeapPop(Heap* hp);//删除第一个数；方法：将第一个和最后一个交换，然后删除最后一个数，也就是原来的第一个数。
HPDataType HeapTop(Heap* hp);//数组下表为零的值
int HeapSize(Heap* hp);
int HeapEmpty(Heap* hp);
void HeapPrint(Heap *hp);
void HeapSort(Heap *hp);//堆排
#endif /*_HEAP_H_*/