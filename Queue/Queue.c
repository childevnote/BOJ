//[BOJ] 10845 Queue
#include <stdio.h>
#include <stdlib.h>
#define EMPTY 0

typedef struct node {
	int data;
	struct node* link;
}Queue;

Queue* GetNode()
{
	Queue* tmp;
	tmp = (Queue*)malloc(sizeof(Queue));
	tmp->link = EMPTY;
	return tmp;
}

void Push(Queue** front, Queue** rear, int data)
{
	if (*front == EMPTY)
	{
		*front = GetNode();
		*rear = *front;
	}
	else
	{
		(*rear)->link = GetNode();
		*rear = (*rear)->link;
	}
	(*rear)->data = data;
}

int Pop(Queue** front, Queue** rear)
{
	Queue* tmp;
	int data;
	if (*front == EMPTY)
	{
		return -1;
	}
	else
	{
		tmp = *front;
		data = tmp->data;
		*front = tmp->link;
		free(tmp);
		return data;
	}
}

int Empty(Queue** front)
{
	if (*front == EMPTY)
		return 1;
	else
		return 0;
}

int main()
{
	Queue* front = EMPTY;
	Queue* rear = EMPTY;
	char str[20];
	int size = 0;
	int input_int, N, n=0;

	scanf("%d", &N);

	while (n < N)
	{
		scanf("%s", str);
		if (!strcmp(str, "push"))
		{
			size++;
			scanf("%d", &input_int);
			Push(&front, &rear, input_int);
		}
		else if (!strcmp(str, "pop"))
		{
			size--;
			if (size < 0)
				size = 0;
			printf("%d\n", Pop(&front, &rear));
		}
		else if (!strcmp(str, "empty"))
		{
			printf("%d\n", Empty(&front));
		}
		else if (!strcmp(str, "size"))
		{
			printf("%d\n", size);
		}
		else if (!strcmp(str, "front"))
		{
			if (Empty(&front) == 1)
				printf("-1\n");
			printf("%d\n", front->data);
		}
		else if (!strcmp(str, "back"))
		{
			if (Empty(&front) == 1)
				printf("-1\n");
			printf("%d\n", rear->data);
		}
		n++;
	}
	return 0;
}