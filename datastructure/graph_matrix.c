#include <stdio.h>
#define V 4


void
init(int adjMatrix[][V])
{
	for (int i=0;i< V ;i++)
	{
		for (int j= 0;j< V;j++)
		{

			adjMatrix[i][j]=0;
			
		}
	}
}
void
display(int adjMatrix[][V])
{
	for (int i=0;i< V ;i++)
	{
		for (int j= 0;j< V;j++)
		{
			printf("%d  ",adjMatrix[i][j]);
			
		}
		printf("\n");
	}
}

void 
insertEdge(int adjMatrix[][V],int i,int j)
{
		adjMatrix[i][j] = 1;
		adjMatrix[j][i] =1;

}



int
main()
{

	int adjMatrix[V][V];
	init(adjMatrix);
	insertEdge(adjMatrix,0,1);
	insertEdge(adjMatrix,0,2);
	insertEdge(adjMatrix,1,2);
	insertEdge(adjMatrix,2,0);
	insertEdge(adjMatrix,2,3);
	display(adjMatrix);

}
