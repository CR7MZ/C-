#include "BTree.h"
#include "queue.h"

int main()
{
	BTNode * testTree = BinaryTreeCreate("ABD##L###EI##J#M#CF##GK###");
	BinaryTreePrevOrderNonR(testTree);
	putchar('\n');
	BinaryTreeInOrderNonR(testTree);
	putchar('\n');
	system("pause");
	return 0;
}