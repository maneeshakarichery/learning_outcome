#include <stdio.h>
#include <stdlib.h>




typedef struct Node_tag{
int data;
struct Node_tag * next;
}node_t;

node_t*
add_node_at_end(node_t* ptr,int value)
{ 
	
	node_t* temp = malloc(sizeof(node_t));
	temp-> data = value;
	temp->next = NULL;	
	ptr -> next = temp;
    


	return temp;
//	point->data = temp->data;
	
   	
}


node_t*
add_node_at_beg(node_t * head,int val)
{
	
	node_t* temp = malloc(sizeof(node_t));
	temp->next = head;
	temp->data = val;
	
	return temp;
}
node_t *
delete_first_node(node_t* head)
{  
	node_t * ptr = head;
//	head->next = NULL;
        head= head->next;
	free(ptr);
	return head;




}

void
add_element_at_pos(node_t* head,int pos,int val)
{

	int count = 0;
	node_t* ptr = head;
	while(count != pos-1)
	{
		count++;
		ptr = ptr->next;
	}
         node_t * temp = malloc(sizeof(node_t));
	temp->next = ptr->next;
	temp->data = val;
	ptr->next = temp;
        
}
void
delete_last_node(node_t *head)
{
	node_t* ptr= head;
	node_t *ptr2 = head;

	while(ptr->next->next != NULL)
	{
		ptr= ptr->next;	
	}
	ptr2=ptr;
	ptr->next = NULL;
	free(ptr->next);


}

void
delete_node_at_apos(node_t* head,int pos)
{
  node_t* ptr=head;
  while(!( pos-1) )
  {
   	ptr =ptr->next;
  }
  ptr = ptr->next; ;

  free(ptr->next);




}

int main()
{

	node_t * head = malloc(sizeof(node_t));
	head-> data = 5000;
	head-> next = NULL;
        node_t * ptr1 = head;
       // node_t * ptrab = head;
        node_t * ptrae = head;
 	ptrae=add_node_at_end(ptrae,9);
	ptrae = add_node_at_end(ptrae,90);
        head = add_node_at_beg(head,6);
	head=add_node_at_beg(head,88);
//	add_element_at_pos(head,2,600);
//	head = delete_first_node(head);
//	delete_last_node(head);
//	delete_node_at_apos(head,4);



	while(ptr1 != NULL)
	{

		printf("value at %d\n ", ptr1->data );
		ptr1=ptr1-> next;

	}





}

