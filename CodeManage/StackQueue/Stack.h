#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int ElemType;
typedef struct Stack
{
	ElemType* a;
	int top; // ’ª∂•Œª÷√
	int capacity; // »›¡ø
}Stack;

void StackInit(Stack* ps);
void StackDestroy(Stack* ps);
void StackPush(Stack* ps, ElemType x);
void StackPop(Stack* ps);
ElemType StackTop(Stack* ps);
int StackSize(Stack* ps);
bool StackEmpty(Stack* ps);