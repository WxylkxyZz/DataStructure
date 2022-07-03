#include "SqList.h"

void InitList(SeqList* L)
{
	L->data = NULL;
	L->length = 0;
	L->MaxSize = 0;
}

void SqListDestory(SeqList* L)
{
	free(L->data);
	L->length = L->MaxSize = 0;
}

void SqListPrint(SeqList* L)
{
	for (int i = 0; i < L->length; i++)
	{
		printf("%d ", L->data[i]);
	}
	printf("\n");
}

void SqListCheckCapacity(SeqList* L)
{
	if (L->length == L->MaxSize)
	{
		// 没有空间/空间不足 --- 扩容
		int NewMaxSize = L->MaxSize == 0 ? 4 : L->MaxSize * 2;
		ElemType* tmp = (ElemType*)realloc(L->data, NewMaxSize * sizeof(ElemType));
		if (tmp == NULL)
		{
			printf("realloc failed\n");
			exit(-1);
		}
		L->data = tmp;
		L->MaxSize = NewMaxSize;
	}

}

void SqListPushBack(SeqList* L, ElemType x)
{
	//SqListCheckCapacity(L);
	//L->data[L->length] = x;
	//L->length++;
	SqListInsert(L, L->length, x);
}

void SqListPopBack(SeqList* L)
{
	//assert(L->length > 0);
	//L->length--;
	SqListDelete(L, L->length-1);
}

void SqListPushFront(SeqList* L, ElemType x)
{
	//SqListCheckCapacity(L);
	//int end = L->length - 1;
	//while (end >= 0)
	//{
	//	L->data[end + 1] = L->data[end];
	//	--end;
	//}
	//L->data[0] = x;
	//L->length++;
	SqListInsert(L, 0, x);
}

void SqListPopFront(SeqList* L)
{
	//assert(L->length > 0);
	//int begin = 1;
	//while (begin <L->length)
	//{
	//	L->data[begin - 1] = L->data[begin];
	//	++begin;
	//}
	//L->length--;
	SqListDelete(L, 0);
}

void SqListInsert(SeqList* L, int pos, ElemType x)
{
	//assert(0<=  pos <=L->length); 这样写不对
	assert(pos>=0 && pos<= L->length);
	SqListCheckCapacity(L);
	int end = L->length - 1;
	while (end>=pos)
	{
		L->data[end + 1] = L->data[end];
		--end;
	}
	L->data[pos] = x;
	L->length++;
}

int SqListDelete(SeqList* L, int pos)
{
	assert(pos>=0 && pos<L->length);
	int begin = pos;
	int x = L->data[pos];
	while (begin<L->length)
	{
		L->data[begin] = L->data[begin + 1];
		begin++;
	}
	L->length--;
	return x;
}

int SqListFind(SeqList* L, ElemType x)
{
	for (int i = 0; i < L->length; i++)
	{
		if (L->data[i] == x)
		{
			return i+1; // 返回位序
		}
	}
	return -1;
}



