#include <stdio.h>
#define MAX 4

void push(int);
int pop ();



int 
main()
{
	 arry_stack[MAX];
	 int top = -1;


}


void 
push(int data)
{
	  if (top > MAX-1)
 	 {
   	    printf("stack overflow");
	    return;
  
 	 }

	  top =+1;
	  arry_stack[top] = data;


}


int
pop()
{
	if (top < 0)
	{
	 printf("stack is empty");
	 return;
	
	}
	int value = arry_stack[top];
         top =-1;
	 return value;


}
	
