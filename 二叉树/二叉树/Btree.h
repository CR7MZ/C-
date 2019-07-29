#ifndef _BTREE_H_
#define _BTREE_H_

#include<vld.h>
typedef char BTDataType;
#define ENDTAG  '#'
typedef struct BinaryTreeNode
{
	BTDataType _data;
	struct BinaryTreeNode* _left;
	struct BinaryTreeNode* _right;
}BTNode;
BTNode* BinaryTreeCreate(BTDataType* a);
void BinaryTreePrevOrder(BTNode* root);//ǰ���õݹ飩
void BinaryTreeInOrder(BTNode* root);//�����õݹ飩
void BinaryTreePostOrder(BTNode* root);//�����õݹ飩

void BinaryTreeLevelOrder(BTNode* root);//�����ö��У�

void BinaryTreePrevOrderNonR(BTNode* root);//ǰ����ջ���ǵݹ飩
void BinaryTreeInOrderNonR(BTNode* root);//������ջ���ǵݹ飩
void BinaryTreePostOrderNonR(BTNode* root);//������ջ���ǵݹ飩
void BinaryTreeComplete(BTNode* root);//��������ж��Ƿ�Ϊ��ȫ������
void BinaryTreeDestory(BTNode* root);//�������٣��õݹ飻
#endif /*_BTREE_H_*/