#include "SqList.h"

void test1()
{
	SeqList L;
	InitList(&L);
	// 尾插
	SqListPushBack(&L, 1);
	SqListPushBack(&L, 2);
	SqListPushBack(&L, 3);
	SqListPushBack(&L, 4);
	SqListPushBack(&L, 5);
	SqListPushBack(&L, 6);
	SqListPrint(&L);
	// 尾删
	SqListPopBack(&L);
	SqListPopBack(&L);
	SqListPopBack(&L);
	SqListPrint(&L);

	// 销毁
	SqListDestory(&L);
}

void test2()
{
	SeqList L;
	InitList(&L);
	// 尾插
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
	// 销毁
	SqListDestory(&L);
}

void test3()
{
	SeqList L;
	InitList(&L);
	// 尾插
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
		printf("位序%d\n", pos);
	}
	// 销毁
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

	// 销毁
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
	printf("删除元素为 %d\n", x);

	SqListPopFront(&L);
	SqListPopFront(&L);
	SqListPopBack(&L);
	SqListPopBack(&L);
	SqListPrint(&L);
	// 销毁
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
		printf("2的位序%d\n", pos);
	}
	int x = SqListDelete(&L, pos - 1);
	SqListPrint(&L);
	printf("删除元素为 %d\n", x);
	// 销毁
	SqListDestory(&L);
}

//int main()
//{
//	// test1();
//	// test2();
//	// test3();
//	// test4();
//	// test5();
//	test6();
//	return 0;
//}


// p18-10-2020统考
// 大概意思 - 给一个数组循环左移p个位置
void Reverse(int arr[], int from, int to)
{
	int temp = 0;
	for (int i = 0; i < (to - from + 1) / 2; i++)
	{
		temp = arr[i];
		arr[from + i] = arr[to - i];
		arr[to - i] = temp;
	}
}
void Converse(int R[], int n, int p)
{
	Reverse(R, 0, p - 1);
	Reverse(R, p, n - 1);
	Reverse(R, 0, n - 1);
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6 };
	Converse(arr, 6, 3);
	for (int i = 0; i < (sizeof(arr) / 4); i++)
	{
		printf("%d\n", arr[i]);
	}
	return -1;
}