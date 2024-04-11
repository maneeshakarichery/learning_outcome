#include <stdio.h>
#include <stdlib.h>



typedef struct stack_tag
{
	int top;
	unsigned capacity;
	int* array;
}stack;

int
isfull(stack* stack)
{
	return stack-> top ==stack->capacity-1;

}

int 
isempty(stack* stack)
{
	return stack->top == -1;

}


void
push(stack* stack,int item)
{
	if (isfull(stack))
		return;

	stack->array[++stack->top]=item;
	printf("element added: %d\n",item);

}



int
pop(stack* stack)
{
	if(isempty(stack))
		return 0 ;
	return stack->array[stack->top--];

}



stack*
create_stack(int capacity)
{
	stack* stack = malloc(sizeof(stack));
	stack-> top = -1;
	stack-> capacity =  capacity;
	stack-> array = malloc(stack->capacity *sizeof(int));
	return stack;
}
void 
display(stack* stack)
{
	int i=0;
	while(i != stack->top+1)
	{ 
	 printf("%d",stack->array[i]);
	 i++;
	}

}

int
peek(stack* stack)
{
 	if(isempty(stack))
		return 0;
	return stack->array[stack->top];

}
int
main()
{
	stack* stack ;
	stack = create_stack(10);
 	push(stack,10);
	push(stack,20);
	push(stack,30);
	int val=pop(stack);
	printf("popped element is:%d\n",val);
	display(stack);
	int a= peek(stack);
	printf("top element is %d",a);

}
