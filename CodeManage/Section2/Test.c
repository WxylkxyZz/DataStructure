#include "SqList.h"

void test1()
{
	SeqList L;
	InitList(&L);
	// β��
	SqListPushBack(&L, 1);
	SqListPushBack(&L, 2);
	SqListPushBack(&L, 3);
	SqListPushBack(&L, 4);
	SqListPushBack(&L, 5);
	SqListPushBack(&L, 6);
	SqListPrint(&L);
	// βɾ
	SqListPopBack(&L);
	SqListPopBack(&L);
	SqListPopBack(&L);
	SqListPrint(&L);

	// ����
	SqListDestory(&L);
}

void test2()
{
	SeqList L;
	InitList(&L);
	// β��
	SqListPushBack(&L, 0);

	SqListPushFront(&L, 1);
	SqListPushFront(&L, 2);
	SqListPushFront(&L, 3);
	SqListPushFront(&L, 4);
	SqListPrint(&L);
	SqListPopFront(&L);
	SqListPopFront(&L);
	SqListPopFront(&L);
	SqListPrint(&L);
	// ����
	SqListDestory(&L);
}

void test3()
{
	SeqList L;
	InitList(&L);
	// β��
	SqListPushBack(&L, 1);
	SqListPushBack(&L, 2);
	SqListPushBack(&L, 3);
	SqListPushBack(&L, 4);
	SqListPrint(&L);

	SqListInsert(&L, 3, 10);
	SqListInsert(&L, 4, 20);
	SqListInsert(&L, 0, -1);
	SqListInsert(&L, 7, 666);
	SqListPrint(&L);

	int pos = SqListFind(&L, 20);
	if (pos != -1)
	{
		printf("λ��%d\n", pos);
	}
	// ����
	SqListDestory(&L);
}

void test4()
{
	SeqList L;
	InitList(&L);
	SqListPushBack(&L, 1);
	SqListPushBack(&L, 2);
	SqListPushBack(&L, 3);
	SqListPushBack(&L, 4);
	SqListPushBack(&L, 5);
	SqListPushFront(&L, -1);
	SqListPushFront(&L, -2);
	SqListPushFront(&L, -3);
	SqListPushFront(&L, -4);
	SqListPushFront(&L, -5);
	SqListPrint(&L);

	// ����
	SqListDestory(&L);
}

void test5()
{
	SeqList L;
	InitList(&L);
	SqListPushBack(&L, 1);
	SqListPushBack(&L, 2);
	SqListPushBack(&L, 3);
	SqListPushBack(&L, 4);
	SqListPushBack(&L, 5);
	SqListPushFront(&L, 6);
	SqListPushFront(&L, 7);
	SqListPushFront(&L, 8);
	SqListPushFront(&L, 9);
	SqListPushFront(&L, 10);
	SqListPrint(&L);

	int x = SqListDelete(&L, 6);
	SqListPrint(&L);
	printf("ɾ��Ԫ��Ϊ %d\n", x);

	SqListPopFront(&L);
	SqListPopFront(&L);
	SqListPopBack(&L);
	SqListPopBack(&L);
	SqListPrint(&L);
	// ����
	SqListDestory(&L);
}

void test6()
{
	SeqList L;
	InitList(&L);
	SqListPushBack(&L, 1);
	SqListPushBack(&L, 2);
	SqListPushBack(&L, 3);
	SqListPushFront(&L, 7);
	SqListPushFront(&L, 8);
	SqListPushFront(&L, 9);
	SqListPrint(&L);

	int pos = SqListFind(&L, 2);
	if (pos != -1)
	{
		printf("2��λ��%d\n", pos);
	}
	int x = SqListDelete(&L, pos-1);
	SqListPrint(&L);
	printf("ɾ��Ԫ��Ϊ %d\n", x);
	// ����
	SqListDestory(&L);
}

int main()
{
	// test1();
	// test2();
	// test3();
	// test4();
	// test5();
	test6();
	return 0;
}