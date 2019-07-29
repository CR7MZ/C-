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
void BinaryTreePrevOrder(BTNode* root);//前序（用递归）
void BinaryTreeInOrder(BTNode* root);//中序（用递归）
void BinaryTreePostOrder(BTNode* root);//后序（用递归）

void BinaryTreeLevelOrder(BTNode* root);//层序（用队列）

void BinaryTreePrevOrderNonR(BTNode* root);//前序（用栈，非递归）
void BinaryTreeInOrderNonR(BTNode* root);//中序（用栈，非递归）
void BinaryTreePostOrderNonR(BTNode* root);//后序（用栈，非递归）
void BinaryTreeComplete(BTNode* root);//层序遍历判断是否为完全二叉树
void BinaryTreeDestory(BTNode* root);//树的销毁；用递归；
#endif /*_BTREE_H_*/