#include "Slist.h"


void test1()
{
	SLTNode* plist = NULL;
	// 记住 : 要改变一级指针的的地址才能改变一级指针, 使其指向别的地方 (也就是传 二级指针)
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPushBack(&plist, 5);
	SListPrint(plist);
}

int main()
{
	test1();
	return -1;
}