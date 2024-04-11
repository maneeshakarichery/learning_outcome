#include <stdio.h>
#define MAXNODE 4
#include <stdlib.h>



typedef struct Node_tag
{
	int dest;
	struct Node_tag* next;
}node;
typedef struct list
{

	node* head;

}list;


 list* adjList[MAXNODE] = {0};



void
init_graph()
{
	for (int i =0;i< MAXNODE ;i++)
	{
		adjList[i] = malloc(sizeof(list));
		adjList[i]->head = NULL;
	
	}



}
void
add_nodes(int s,int d)
{	
	node* temp;
	node* src;
	node * dest;
	
	if (adjList[s]->head == NULL )
	{
		src = malloc(sizeof(node));
		src->dest = d;
		src->next = NULL;
		adjList[s]->head = src;
	}

	dest = malloc(sizeof(node));
	dest->dest = s;
	dest->next =NULL;
	temp = adjList[s]->head;
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	

	temp->next =dest;
	




}

void printList() {
    for (int i = 0; i < MAXNODE; i++) {
        node* p = adjList[i]->head;
        printf("%d: ", i);
        while (p != NULL) {
            printf("%d ", p->dest);
            p = p->next;
        }
        printf("\n");
    }
}


int main() {
    init_graph();
    add_nodes(0, 1);
    add_nodes(0, 2);
    add_nodes(1, 3);
    add_nodes(2, 3);

    printList();

    return 0;
}

