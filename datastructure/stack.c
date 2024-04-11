#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int stack [SIZE];
int head = -1;




void push();
void pop();
void display();




int main()
{

	while(1)
	{		
	printf("\n1.push\n");
	printf("\n2.pop\n");
	printf("\n3.display\n");
	printf("\n4.quit\n");
	printf("enter your choice");
	int choice ;
	scanf("%d" ,&choice);

	switch(choice)
	{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3: 
			display();
			break;
		case 4 : exit(1);
		default:
			 printf("invalid choice");
			 
	}



}
}

void push()
{

	if (head < SIZE-1)
	{
		printf("enter the value to be pushed");
		int data;
		scanf("%d",&data);
		head = head+1;
		stack[head] =data;
	}
	else
	{
		printf("the stack is full");
	}


}


void pop()
{
	if(head == -1)
	{
		printf("the stack is empty\n");

	}
	else
	{
		printf("the popped element is %d",stack[head]);
		head = head-1;

	
	}


}




void display()
{
	for(int i =0; i< SIZE-1;i++)
	{
		printf("%d",stack[i]);
	//	i++;
	}


}
