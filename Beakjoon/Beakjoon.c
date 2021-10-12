#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define EMPTY 0

typedef struct node {
    int data;
    struct node* link;
}Stack;

Stack* GetNode()
{
    Stack* tmp;
    tmp = (Stack*)malloc(sizeof(Stack));
    tmp->link = EMPTY;
    return tmp;
}

void Push(Stack** top, int data)
{
    Stack* tmp;
    tmp = *top;
    *top = GetNode();
    (*top)->data = data;
    (*top)->link = tmp;
}

int Empty(Stack** top)
{
    if (*top == EMPTY)
        return 1;
    else
        return 0;
}

void Pop(Stack** top)
{
    if (Empty(&top) == 1)
        return -1;
    Stack* tmp;
    tmp = *top;
    printf("%d\n", (*top)->data);
    *top = (*top)->link;
    free(tmp);
}

int Size(Stack** top)
{
    Stack* tmp;
    int size = 0;
    tmp = *top;
    while (tmp)
    {
        tmp = tmp->link;
        size++;
    }
    return size;
}

int Top(Stack** top)
{
    if (Empty(&top) == 1)
        return -1;
    Stack* tmp;
    tmp = *top;
    int n = Size(&top);
    while (n)
    {
        tmp = tmp->link;
    }
    return tmp->data;
}

int main()
{
    char str[20];
    Stack* top = EMPTY;
    int input_int;
    int time;

    printf("입력 횟수 > ");
    scanf("%d", &time);
    

    for (int i = 0; i < time; i++)
    {
        printf("명령 입력 > "); scanf("%s", str);
        if (!strcmp(str, "push")) 
        {
            scanf("%d", &input_int);
            Push(&top, input_int);
        }
        else if (!strcmp(str, "pop")) 
        {
            Pop(&top);
        }
        else if (!strcmp(str, "empty"))
        {
            printf("%d\n", Empty(&top));
        }
        else if (!strcmp(str, "size"))
        {
            printf("%d\n", Size(&top));
        }
        else if (!strcmp(str, "top"))
        {
            printf("%d\n", Top(&top));
        }
    }
}


////[BOJ] 9093
//#include <stdio.h>
//#include <string.h>
//#define MAX_STR_SIZE 1000
//#define MAX_WORD_SIZE 20
//
//int main()
//{
//	int num, n = 0, str_size=0, word_size=0;
//	char str[MAX_STR_SIZE+1];
//	char word[MAX_WORD_SIZE+1];
//
//	scanf("%d ", &num);
//	//while (getchar() != '\n');
//	while (n < num)
//	{
//		gets(str);
//		str_size = strlen(str);
//		word_size = 0;
//		for (int j = 0; j < str_size; j++)
//		{
//			if (str[j] == ' ')
//			{
//				for (int k = word_size - 1; k >= 0; k--)
//				{
//					printf("%c", word[k]);
//				}
//				word_size = 0;
//				printf(" ");
//			}
//
//			else if (j == str_size - 1)
//			{
//				word[word_size] = str[j];
//				word_size++;
//				for (int k = word_size - 1; k >= 0; k--)
//				{
//					printf("%c", word[k]);
//				}
//			}
//			else
//			{
//				word[word_size] = str[j];
//				word_size++;
//			}
//		}
//		printf("\n");
//		num++;
//	}
//	return 0;
//}