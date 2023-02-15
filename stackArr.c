#include<stdio.h>
#include<stdlib.h>

struct stack
{
	int size, top, *arr;
};

int isEmpty(struct stack *ptr)
{
	if(ptr->top == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isFull(struct stack *ptr)
{
	if(ptr->top == (ptr->size - 1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	struct stack *s;
	s = (struct stack *)malloc(sizeof(struct stack));
	s->size = 5;
	s->top = -1;
	s->arr = (int *)malloc(s->size*sizeof(int));
	
	//Pushing elements manually
	s->arr[0] = 7;
	s->top++;
	s->arr[1] = 32;
	s->top++;
	s->arr[2] = 21;
	s->top++;
	s->arr[3] = 11;
	s->top++;
	s->arr[4] = 56;
	s->top++;
	
	//Check if stack is empty
	if(isEmpty(s))
	{
		printf("The stack is empty\n");
	}
	else
	{
		printf("The stack is not empty\n");
	}
	
	//Check if stack is full
	if(isFull(s))
	{
		printf("The stack is full\n");
	}
	else
	{
		printf("The stack is not full\n");
	}
	
	return 0;
}