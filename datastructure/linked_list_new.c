
#include <stdio.h>
#include <stdlib.h>

typedef struct Node_tag{
int data;
struct Node_tag * next;
}node_t;


node_t *
create_linked_list()
{
	node_t*  head  = NULL;
	head  = malloc(sizeof(node_t));
	head -> data = 1000;
	head -> next = NULL;



	node_t* current = NULL;
	current = malloc(sizeof(node_t));
	head-> next = current;
	current -> data = 2000;
	current -> next = NULL;
	 
	current = malloc(sizeof(node_t));
	head->next->next = current;
	current -> next = NULL;
	current->data = 6000;
	return head;

}



node_t*
reverse(node_t * head)
{

	node_t* prev = NULL;
	node_t* nex = NULL;
	
	
	while(head != NULL)
	{
		nex = head->next;
		head->next = prev;
		prev = head;
		head = next;
		
	}
	
	
	head = prev;
	
	return head;


}


int
count_nodes ( node_t* head)
{
	int count = 0;
	if (head == NULL)
	{
		printf("the list is emplty");
	}
	else
	{
		node_t *point = NULL;
		point = head;
		while(point != NULL)
		{
			count++;
			point = point->next;
		}
		return count;
	
	}

}
void
print_data(node_t *head)
{
	node_t* point =NULL;
	point = head;
	

	while(point != NULL)
	{
		
		printf("value at %d\n ", point->data );
		point=point-> next;
		
	}
//	return data;

	
}


int 
value_at_a_node(node_t* head,int number)
{
	node_t* point;
	point=head;
	int count = 0;
	int value=0;
	while(count !=number)
	{
		count++;
		value= point->data;
		point = point->next;
	
	}
	return value;




}


void
add_node_at_end(node_t* head,int value)
{ 
	
	node_t* temp = malloc(sizeof(node_t));
	temp-> data = value;
	node_t *point = NULL;
        point = head;
        while(point->next !=NULL)
	{
		point=point->next;
	//	return point;
	
	}
	point-> next = temp ;
//	point->data = temp->data;
	
   	
}

int
main()
{
	node_t* head = create_linked_list();
	int count =count_nodes(head);
        printf("%d",count);
	
	 print_data(head);

	 int value = value_at_a_node(head,2);

          printf("value aht %d\n ", value );
	add_node_at_end(head,9);
	




}

