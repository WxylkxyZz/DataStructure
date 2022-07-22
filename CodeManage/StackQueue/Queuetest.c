#pragma once
#include "Queue.h"

void test_1()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
 	QueuePush(&q, 4);

	QueuePop(&q);
	QueuePop(&q);
	QueuePop(&q);
	QueuePop(&q);
	// QueuePop(&q);

	// printf("%d\n", QueueBack(&q));
	// printf("%d\n", QueueFront(&q));
	QueuePush(&q, 10);
	QueuePush(&q, 20);
	QueueSize(&q);
	QueueDestroy(&q);
}

void test_2()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);
	while (!QueueEmpty(&q))
	{
		Elemtype front = QueueFront(&q);
		printf("%d ", front);
		QueuePop(&q);
	}
	printf("\n");
	QueueDestroy(&q);
}

int main()
{
	// test_1();
	test_2();
	return -1;
}