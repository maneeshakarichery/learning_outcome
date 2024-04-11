#include <stdio.h>
#include  <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <limits.h>
typedef struct bst{
	int val;
	struct bst* left;
	struct bst* right ;

}bst_t;


bst_t*
create_node(int data)
{
	bst_t* temp =  malloc(sizeof(bst_t));
	temp-> val= data;
	temp ->  left =NULL;
	 temp->right =NULL;

	//printf("succes");
	return temp;

}

bst_t*
insert_node(bst_t* head,int  data)
{
	if (head ==NULL)
	{
		
		head = create_node( data);
		return head;
	
	}
	else if (data <= head->val)
	{
		head->left=insert_node(head->left,data);

	}
	else 
	{
		head->right =insert_node(head->right,data);
	}
	return head;

}
int
inorder_traversal(bst_t * head)
{

	if (head==NULL)
	{
		return 0;
	}	
	inorder_traversal(head->left);
	printf("%d\n",head-> val);
//	inorder_traversal(head);
	inorder_traversal(head->right);
	

}

int 
min_element(bst_t * head)
{
	 bst_t* temp = head;
	  while (temp-> left != NULL)
	  {
	  	temp = temp-> left;
	  
	  }
	 printf("min element %d\n", temp->val);


}



void
max_element(bst_t * head)
{
	bst_t * temp =  head;
	while(temp->right != NULL )
	{
		temp = temp  ->right;
	
	}

	printf("max elemrnt %d\n",temp->val);
}

int 
height(bst_t * head)
{
	if (head == NULL)
	{
		return -1;
	
	}

	int left=height(head-> left);
	int right = height(head -> right);
	 
    return (left > right) ? left + 1 : right + 1;


}


bool is_bst_utils(bst_t* head ,int  min ,int max)
{
	if (head ==NULL)
	{
		return true;
	
	}
	
	if (head-> val < min && head->val > max)
	{
		return false;
	}
	is_bst_utils( head->left, min ,head->val );
	is_bst_utils(head->right ,head->val , max);

}
bool 
is_bst(bst_t* head)
{
	is_bst_utils(head ,INT_MIN ,INT_MAX);

}


int
main()
{
	
	bst_t* root =NULL;

	//root = create_node(root,1000);
	root = insert_node(root , 11);
	bst_t* head = root;
	root  = insert_node(root,6);
	root = insert_node(root,4);
	root = insert_node(root,5);
	root = insert_node(root,8);
	root =insert_node(root,10);
	root =insert_node(root,19);
	root =insert_node(root,43);
	root =insert_node(root,31);
	root =insert_node(root,49);
	root =insert_node(root,17);
												
	inorder_traversal(head);
	min_element(root);
	max_element(root);
	int heightq =  height(head);
	printf("heaight is : %d\n",heightq);
	bool t =0;
	 t = is_bst(root);
	printf ("%d", t);

}
