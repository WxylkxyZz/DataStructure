#include "Stack.h"

void StackInit(Stack* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->top = 0;
	// ��ʼ��ʱ top��  0  ---> ��ζ��topָ�� ջ������ ����һ��
	//                top�� -1 ---> ��ζ��topָ�� ջ������ 
	ps->capacity = 0;
}


void StackDestroy(Stack* ps)  // ����pop�� ҲҪ���� ��Ϊ������Ȼɾ�� ���ǿռ仹��
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->top = 0;
	ps->capacity = 0;
}


void StackPush(Stack* ps, ElemType x)
{
	assert(ps);
	if (ps->top == ps->capacity)
	{
		int newcapacaiy = ps->capacity == 0 ? 4 : ps->capacity * 2;
		ElemType* tmp = realloc(ps->a, sizeof(ElemType) * newcapacaiy);
		if (tmp == NULL)
		{
			printf("realloc failed;\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newcapacaiy;
	}
	ps->a[ps->top] = x;
	ps->top++;

}


void StackPop(Stack* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));
	ps->top--;
}


ElemType StackTop(Stack* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));
	return ps->a[ps->top - 1];
}

int StackSize(Stack* ps);



bool StackEmpty(Stack* ps)
{
	assert(ps);
	return ps->top == 0;
}