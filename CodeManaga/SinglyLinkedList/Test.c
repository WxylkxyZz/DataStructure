#include "Slist.h"


void test1()
{
	SLTNode* plist = NULL;
	// ��ס : Ҫ�ı�һ��ָ��ĵĵ�ַ���ܸı�һ��ָ��, ʹ��ָ���ĵط� (Ҳ���Ǵ� ����ָ��)
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