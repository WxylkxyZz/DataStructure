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
int main()
{
	test1();
	return 0;
}