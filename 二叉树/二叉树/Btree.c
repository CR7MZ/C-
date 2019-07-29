#include"Btree.h"
#include"queue.h"
#include"stack.h"
#include<stdio.h>
#include<stdlib.h>

BTNode* BinaryTreeCreate(BTDataType* a)
{
	BTNode*cur;
	static int i = 0;//��̬������Ϊȫ�֡�
	if (a[i] ==ENDTAG)
	{
		i++;
		return NULL;
	}
	cur = (BTNode*)malloc(sizeof(BTNode));
	cur->_data = a[i];
	i++;
	cur->_left = BinaryTreeCreate(a);
	cur->_right = BinaryTreeCreate( a);
	return cur;
}
void BinaryTreePrevOrder(BTNode* root)//ǰ�����
{
	if (root != NULL)
	{
		printf("%c", root->_data);
		BinaryTreePrevOrder( root->_left );
		BinaryTreePrevOrder( root->_right );
	}
}
void BinaryTreeInOrder(BTNode* root)//�������
{
	if (root != NULL)
	{
		BinaryTreeInOrder(root->_left);
		printf("%c", root->_data);
		BinaryTreeInOrder(root->_right);
	}
}
void BinaryTreePostOrder(BTNode* root)//�������
{
	if (root != NULL)
	{
		BinaryTreePostOrder(root->_left);
		BinaryTreePostOrder(root->_right);
		printf("%c", root->_data);
	}
}
void BinaryTreeLevelOrder(BTNode* root)
{
	Queue qu;
	BTNode * tmp;

	QueueInit(&qu);

	QueuePush(&qu, root);
	while (!QueueEmpty(&qu))
	{
		tmp = QueueFront(&qu);
		printf("%c", tmp->_data);
		if (tmp->_left)
		{
			QueuePush(&qu, tmp->_left);
		}
		if (tmp->_right)
		{
			QueuePush(&qu, tmp->_right);
		}
		QueuePop(&qu);
	}
	QueueDestory(&qu);
}
void BinaryTreePrevOrderNonR(BTNode* root)
{
	Stack st;
	BTNode*cur=root;
	StackInit(&st, 100);
	while (cur || !StackEmpty(&st))
	{
		putchar(cur->_data);
		if (cur->_right)
		{
			StackPush(&st, cur->_right);
		}
		if (cur->_left)
		{
			cur = cur->_left;
		}
		else
		{
			cur = StackFront(&st);
			StackPop(&st);
		}
	}
	StackDestory(&st);
}
void BinaryTreeInOrderNonR(BTNode* root)
{
	
		BTNode * cur = root;

		Stack st;
		StackInit(&st, 100);

		while (cur || !StackEmpty(&st)) //��curΪ����ջΪ��ʱ��ѭ���������������������
		{
			for (; cur; cur = cur->_left)
				//1����Ŀǰ�ĸ��������е�����ѹջ��ֱ���Ҳ�������Ϊֹ
				//2����Ŀǰ���Һ�����Ϊ��������������������ѹջ
			{
				StackPush(&st, cur);
			}

			if (!StackEmpty(&st))
			{
				cur = StackFront(&st);
				//1�����ӱ�����Ϻ󣬵�һ��û�����ӵĽڵ��������ĵ�һ�����
				//2������Һ���Ϊ�գ���ʱջ�ｫ������һ��Ҫ���ʵĽڵ�
				//   ������Һ��ӣ���ô��ʱջ�ｫ�������Ǹ��Һ���Ϊ���������е�һ��û�����ӵĽڵ�
				putchar(cur->_data);
				//1������û�������ˣ����Դ�ӡ��
				StackPop(&st);
				cur = cur->_right;
				//1���������͸����������󣬱�������������
			}
		}
		StackDestory(&st);	
}
void BinaryTreePostOrderNonR(BTNode* root)
{
	BTNode * cur = root;

	Stack st;
	int tag[32] = { 0 }; //���ӱ�����ǩ

	StackInit(&st, 100);

	while (cur || !StackEmpty(&st))
	{
		for (; cur; cur = cur->_left) //�������򣬽�������ջ��curΪ��ʱ��������һ���ڵ���Һ���Ϊ�գ�ֻ������������ſ��ܽ��������while
		{
			StackPush(&st, cur); //push�����ᵼ��size+1
			tag[st.size] = 0; //������ջ�������ӣ�������������ӱ�����ǩ��0
		}

		//ֻҪ�����forִ�й�����һ��ѭ�����Һ��Ӳ�Ϊ�գ������while�ĺ�벿������������������
		while (!StackEmpty(&st) && tag[st.size] == 1) //���ӻ�û�������ʱ�����ܽ����ӡ
			//���ԣ�����ȷ����ֻ�������������������ʱ���Ż�������while
		{
			cur = StackFront(&st);
			putchar(cur->_data); //��ӡ��
			StackPop(&st); //pop�����ᵼ��size-1
			cur = NULL; //Ϊ��ѭ����������
		}

		if (!StackEmpty(&st))
		{
			tag[st.size] = 1; //��������֤��������������ϣ���������ǩ��1
			cur = StackFront(&st)->_right; //������������������
		}
	}
	StackDestory(&st);
}

void BinaryTreeComplete(BTNode* root)
{
	Queue qu;
	BTNode * tmp;

	QueueInit(&qu);

	QueuePush(&qu, root);
	while (!QueueEmpty(&qu))
	{
		int leafflag = 0;
		tmp = QueueFront(&qu);
		printf("%c", tmp->_data);
		QueuePop(&qu);
		if (leafflag && (tmp->_left ||  tmp->_right))
		{
			return 0;
		}
		if (tmp->_left&&tmp->_right)
		{
			QueuePush(&qu, tmp->_left);
			QueuePush(&qu, tmp->_right);
		}
		else if (tmp->_right&&!tmp->_left)
		{
			return 0;
		}
		else
		{
			leafflag = 1;
			if (tmp->_left)
			{
				QueuePush(&qu, tmp->_left);
			}
		}
	}
	QueueDestory(&qu);
}
void BinaryTreeDestory(BTNode* root)
{
	BTNode*left;
	BTNode*right;
	if (root)
	{
		left = root->_left;
		right = root->_right;
		free(root);
		BinaryTreeDestory(left);
		BinaryTreeDestory(right);
	}
}