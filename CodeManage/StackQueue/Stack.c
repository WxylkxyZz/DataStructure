#include "Stack.h"

void StackInit(Stack* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->top = 0;
	// 初始化时 top赋  0  ---> 意味着top指向 栈顶数据 的下一个
	//                top赋 -1 ---> 意味着top指向 栈顶数据 
	ps->capacity = 0;
}


void StackDestroy(Stack* ps)  // 即便pop完 也要销毁 因为数据虽然删除 但是空间还在
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