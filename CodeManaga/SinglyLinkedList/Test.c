#include "Slist.h"


void test1()
{
	SLTNode* plist = NULL;
	// ��ס : Ҫ�ı�һ��ָ��ĵĵ�ַ���ܸı�һ��ָ��, ʹ��ָ���ĵط� (Ҳ���Ǵ� ����ָ��)
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