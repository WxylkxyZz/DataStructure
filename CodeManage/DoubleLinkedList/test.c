#include "DLL.h"

void Test1()
{
	DLLNode* plist = ListInit();
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPrint(plist);
	ListPopBack(plist);
	ListPopBack(plist);
	ListPopBack(plist);
	ListPopBack(plist);
	ListPrint(plist);

	ListPushFront(plist, 4);
	ListPushFront(plist, 3);
	ListPushFront(plist, 2);
	ListPushFront(plist, 1);
	ListPrint(plist);
	ListPopFront(plist);
	ListPopFront(plist);
	ListPopFront(plist);
	ListPopFront(plist);
	ListPrint(plist);
}

void Test2()
{
	DLLNode* plist = ListInit();
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPrint(plist);
	DLLNode * node = ListFind(plist, 3);
	if (node)
	{
		ListErase(node);
	}
	ListPrint(plist);

	Destroy(plist);
	plist = NULL; // 在Destroy内置空不会改变plist 除非传二级指针 但我们为了接口一致性 都传入一级指针  所以在外面置空即可
}

int main()
{
	// Test1();
	Test2();
	return -1;
}