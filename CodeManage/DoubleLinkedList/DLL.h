#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int ElemType;

typedef struct DLLNode
{
	ElemType data;
	struct DLLNode* next;
	struct DLLNode* prev;
}DLLNode;

DLLNode* ListInit();
void ListPrint(DLLNode* phead);

DLLNode* BuyListNode(ElemType x);

void ListPushBack(DLLNode* phead, ElemType x);
void ListPopBack(DLLNode* phead);

void ListPushFront(DLLNode* phead, ElemType x);
void ListPopFront(DLLNode* phead);


DLLNode* ListFind(DLLNode* phead, ElemType x);