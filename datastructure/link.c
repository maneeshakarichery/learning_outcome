#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
typedef  struct link_tag
{
	int data;
	struct link_tag* next;
	

}link_t;


link_t*
create_linked_list()
{

	link_t* node = NULL;
	node = malloc(sizeof(link_t));
	return node;
}

void
add_element_atbeg(link_t** head ,int data)
{
	link_t* temp = malloc(sizeof(link_t));
	temp -> data = data;
	temp-> next = *head;
        *head = temp;
        

}


link_t*
reverse(link_t * head)
{

	link_t* prev = NULL;
	link_t* nex = NULL;
	
	
	while(head != NULL)
	{
		nex = head->next;
		head->next = prev;
		prev = head;
		head = nex;
		
	}
	
	
	head = prev;
	
	return head;


}

link_t* rvsrse_recrsive(link_t * head, link_t * prev)
{

	if(head==NULL)
	{
		return prev;
	
	}
    	link_t* nex= head ->next;
    	head -> next = prev;

    	return rvsrse_recrsive(nex,head);

}

link_t* remove_nthement_from_last(link_t* head,int n)
{
	link_t* dummy= malloc(sizeof(link_t));
	link_t * first = dummy;
	link_t* second  =  dummy;
	dummy->next = head;
	
	for (int i = 0; i<= n ;i++)
	{
	  if (second == NULL)
	  {
	  	return head;
	  
	  }
	  second = second ->next;
	
	
	}
	while(second  != NULL)
	{
		second = second->next;
		first = first->next;
	
	}
	
	link_t * temp =  first->next;
	first ->next = first ->next ->next;
	free(temp);
	
	return dummy->next;
	
	

}
void
detele_first_node(link_t * head)
{
//	head->next = }

}


void 
add_element_atend(link_t** head,int data)
{
	 link_t* temp = malloc(sizeof(link_t));
	 temp -> next =NULL;
         temp -> data = data;
		
         link_t * last= *head;

	if(*head == NULL)
	{
		*head = temp;
		return;
	
	}
	while( last->next != NULL)
	{
		last = last->next;
	}
	 last -> next = temp;


}

link_t*
find_middle_element(link_t *head)
{
	
	link_t * fast= head;
	link_t * slow = head;
	
	if(head == NULL  || head ->next == NULL)
	
	
	{
	       
		return head;
	}
	
	
	while(fast != NULL && fast -> next != NULL)
	
	{
		slow= slow-> next;
		fast = fast ->next->next;
	
	}
	return slow;
	printf("slow %d",slow->data);
	


}
void
add_element_atpos(link_t* head,int pos, int data)
{
	while(pos-2 != 0)
	{
		pos--;
		head = head->next;

	}
	link_t* temp = malloc(sizeof(link_t));
	head->next =temp;
        temp->next = head->next;
        temp->data = data;	
	 

}

void delete_max_element(link_t** head)
{
    if (*head == NULL || (*head)->next == NULL) {
        printf("List is empty or has only one element\n");
        return;
    }

    int max_data = INT_MIN;
    link_t* prev = NULL;
    link_t* max = *head;
    link_t* current = (*head)->next;

    while (current->next != NULL)
    {
        if (current->next->data > max_data)
        {
            max = current->next;
            max_data = current->next->data;
            prev = current;  // Update prev inside the loop
        }

        current = current->next;
    }

    if (max == *head)
    {
        *head = (*head)->next;
    }
    else
    {
        prev->next = max->next;
    }

    free(max);
}


int 
main()
{
	link_t * head;
	head=create_linked_list();
	link_t * ptr;
	link_t * head2;
	head2 = head;
	ptr = head;
	add_element_atbeg(&head,1000);
        add_element_atbeg(&head,2000);


	add_element_atend(&head,3000);
	//delete_first_node(head);
	add_element_atend(&head,4000);
	add_element_atend(&head,5000);
	add_element_atend(&head,3500);
	//add_element_atpos(head2,3,7);
	delete_max_element(&head);
	
	while(ptr != NULL)
	{
		printf("%d\n",ptr->data);
		ptr = ptr ->next;
	}
	
	//head =  rvsrse_recrsive(head,NULL);	
	printf("reversed\n");
	

	
	link_t* val = find_middle_element(head);

if (val != NULL) {
    printf("Middle element data: %d\n", val->data);
} else {
    printf("List is empty or NULL.\n");
}

	
	
	head = remove_nthement_from_last(head,2);
		printf("removed\n");
	
	while(head != NULL)
	{
		printf("%d\n",head->data);
		head = head ->next;
		
		
	}
	

}
