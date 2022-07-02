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

void SqListPushBack(SeqList* L, ElemType x)
{
	if (L->length == L->MaxSize)
	{
		// 没有空间/空间不足 --- 扩容
		int NewMaxSize = L->MaxSize == 0 ? 4 : L->MaxSize*2;
		ElemType* tmp = (ElemType* )realloc(L->data, NewMaxSize*sizeof(ElemType));
		if (tmp == NULL)
		{
			printf("realloc failed\n");
			exit(-1);
		}
		L->data = tmp;
		L->MaxSize = NewMaxSize;
	}

	L->data[L->length] = x;
	L->length++;
}

void SqListPopBack(SeqList* L)
{
	assert(L->length > 0);
	L->length--;
}