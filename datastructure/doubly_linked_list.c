#include <stdlib.h>
#include <stdio.h>

typedef struct node_tag
{
 struct node_tag* prev;
 int data;
 struct node_tag* next;


}node_t;


node_t *
create_node(int data)
{
	node_t* temp = malloc(sizeof(node_t));
//	temp = head;
	temp-> prev = NULL;
	temp-> next = NULL;
	temp->data = data;
	return temp;
}

node_t*
add_node_at_end(node_t* head,int val)
{
	node_t* ptr = malloc(sizeof(node_t));
	head->next = ptr;
	ptr->prev = head;
	ptr->data = val;
	ptr->next = NULL;
	return ptr;
}

void
add_node_at_pos(node_t* head,int pos,int val)
{
	node_t* temp = malloc(sizeof(node_t));
        node_t*	ptr =head;
	while(!(pos-1))
	{
		ptr= ptr->next;
		pos --;
	
	
	}

	ptr->next =temp;
        temp->prev = ptr;
	temp->next = ptr->next;	
	temp->data = val;

	
}

int
main()
{
	node_t* head;
       	head= create_node(1000);
       	node_t* ptr = head;
	node_t* ptrae=head;
	ptrae=add_node_at_end(ptrae,2000);
	ptrae=add_node_at_end(ptrae,3000);
	add_node_at_pos(head,2,5000);

	
	while(ptr  != NULL)
	{
		printf("%d\n",ptr->data);
		ptr = ptr->next;
		
	}




}



