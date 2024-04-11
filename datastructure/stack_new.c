#include <stdio.h>
#include <stdbool.h>
#define N 3 
int arr[N];
int head = -1;

bool
isEmpty()
{
	 if (head == -1)
	 {
 		return true;
	 }
	return false;
}
bool
isFull()
{
 	if(head == N-1)
	 {
 		return true;
	 }
	return false;
}

void
push( int data)
{
	if (isFull())
	{
		printf("the stack is full");
		return;
	
	}
	arr[++head]= data;
	printf("head after push is %d\n" ,head);
}

int 
pop()
{
	if(isEmpty())
	{
		printf("the stack is empty");
		return;
	}
	int data = arr[head--];

	printf("head after pop is %d\n",head);



}

void
getMax()
{
	
	
	int i = 0 , max_index = 0;
	
	
		max_index = 0;
		int j = 1;
		for (j ;j < head ;j++)
		{
			if (arr[j] > arr[max_index])
			{
				max_index = j;
			}
		
		}
		if (max_index !=0)
		{
			printf( "max value is %d", arr[max_index]);
		
		} 
		else
		{
			printf( "max value is %d\n",arr[0]);
		
		}
		
	  
		
				
	

}

void 
display()
{
	for (int i=0;i <=head;i++)
	{
		printf("%d",arr[i]);
	
	}

}


int
main()
{
push(9);
 push(4);
push(1);
push (3);
getMax();
//Sop();
// pop();
 display();


}
