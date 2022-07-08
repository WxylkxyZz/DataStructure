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
	SListPopFront(&plist);
	SListPopFront(&plist);
	// SListPopFront(&plist);
	SListPrint(plist);
}

void test3()
{
	SLTNode* plist = NULL;
	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 4);
	SListPushFront(&plist, 5);
	SListPushFront(&plist, 6);
	SListPushFront(&plist, 5);
	SListPrint(plist);

	// ���ظ�ֵʱ
	SLTNode* pos = SListFind(plist, 5);
	int i = 1;
	while (pos)
	{
		printf("��%d��pos�ڵ�:%p->%d\n", i++, pos, pos->data);
		pos = SListFind(pos->next, 5);
	}
	// �������޸�
	pos = SListFind(plist, 3);
	if (pos)
	{
		pos->data = 30;
	}
	SListPrint(plist);

}

void test4()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPushBack(&plist, 5);
	SListPushBack(&plist, 6);
	SListPrint(plist);

	SLTNode* pos = SListFind(plist, 1);
	if (pos)
	{
		SListInset(&plist, pos, 10);
	}
	SListPrint(plist);
}

int main()
{
	// test1();
	// test2();
	// test3();
	test4();
	return -1;
}
