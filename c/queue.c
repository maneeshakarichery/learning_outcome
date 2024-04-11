#include <stdio.h>
# define MAX 10

int q_arr[MAX];

int tail = -1;
int head = -1;
void removeFromQue();
void addToQue(int);
int 
main()
{
}


void 
addToQue(int data)
{
	if (tail== head == -1)
	{
		head++;
		tail++;
		q_arr[tail] = data;
	}
	else if (tail == MAX-1)
	{
		printf("buffer overflow");
	}
	else
		tail++;
		q_qrr[tail]= data;

}

void
removeFromQue()
{
	if(head == -1 || head ==tail)
	{
		printf("que is empty");
	}
	else 
		head++;
}







