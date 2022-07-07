#include "Slist.h"


void test1()
{
	SLTNode* plist = NULL;
	// 记住 : 要改变一级指针的的地址才能改变一级指针, 使其指向别的地方 (也就是传 二级指针)
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPrint(plist);

	SListPushFront(&plist, 6);
	SListPushFront(&plist, 7);
	SListPushFront(&plist, 8);
	SListPushFront(&plist, 9);
	SListPrint(plist);
}


void test2()
{
	SLTNode* plist = NULL;
	SListPushFront(&plist, 6);
	SListPushFront(&plist, 7);
	SListPushFront(&plist, 8);
	SListPushFront(&plist, 9);
	SListPrint(plist);
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPopBack(&plist);
	// SListPopBack(&plist);
	SListPrint(plist);
}

int main()
{
	// test1();
	test2();
	return -1;
}