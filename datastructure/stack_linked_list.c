#include <stdlib.h>
#include <stdio.h>



typedef struct array_tag{
 int data;
 struct array_tag* next;

}array_t;

void
create_array(array_t** head)
{
	array_t* array = malloc(sizeof(array_t));
	array -> next = NULL;
	*head = array;
}


void 
push(array_t ** head,int data)
{
	array_t * new = malloc(sizeof(array_t));
	new -> data = data;
	new-> next = *head;
	*head =  new;
	


}

int
isEmpty(array_t * head)
{
	return head == NULL;

}
void
pop(array_t **head)
{

if(isEmpty(*head))
{
	return ;
 }
	array_t * new;
	new ->next =(*head)-> next;
	*head = new;
	free(new);

}




void
display(array_t* head)
{
	array_t* ptr = head;
	while(ptr->next != NULL)
	{
		printf("%d\n",ptr->data);
		ptr = ptr->next;
	}

}


int
main()
{
	array_t * head;
	create_array(&head);
	push(&head,100);
	push(&head,200);
	push(&head,300);
	pop(&head);
	display(head);

}







