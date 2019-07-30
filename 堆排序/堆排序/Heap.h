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
void HeapPush(Heap* hp, HPDataType x);//�ӶѺ����һ�������������µ�����
void HeapPop(Heap* hp);//ɾ����һ����������������һ�������һ��������Ȼ��ɾ�����һ������Ҳ����ԭ���ĵ�һ������
HPDataType HeapTop(Heap* hp);//�����±�Ϊ���ֵ
int HeapSize(Heap* hp);
int HeapEmpty(Heap* hp);
void HeapPrint(Heap *hp);
void HeapSort(Heap *hp);//����
#endif /*_HEAP_H_*/