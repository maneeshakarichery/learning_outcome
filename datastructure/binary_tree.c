


#include <stdio.h>
#include <stdlib.h>
typedef  struct node
{
	int data;
	struct node* left,*right;
}node_t;


node_t* create_node()
{       int x =0;
	node_t* newnode = malloc(sizeof(node_t));
	printf("enter a value for node (enter 0 for no node)");
	scanf("%d",&x);
	if(x== -1)
	{
		 return 0;	
	}
	newnode ->data = x;
	printf("left child of %d\n",x);
	newnode->left=create_node();
	printf(" right child of %d\n",x);
	newnode-> right = create_node();
        return newnode; // Fix: Return the newly created node


}
int
preorder_tranversal(node_t* root)
{
	if(root==0)
	{
	 	return 0;
	
	}
	printf(" values are %d\n",root->data);
	preorder_tranversal(root->left);
	preorder_tranversal(root->right);
}


int
inorder_tranversal(node_t * root)
{
	if(root ==0)
	{
		return 0 ;
	
	}
	//printf("%d",root->left);
	inorder_tranversal(root->left);
	printf("%d",root->data);
	inorder_tranversal(root->right);
}


int
postorder_tranversal(node_t* root)
{
        if(root==0)
        {
                return 0;

        }
	 preorder_tranversal(root->right);
        printf(" values are %d\n",root->data);
        preorder_tranversal(root->left);
        preorder_tranversal(root->right);
}




void
main()
{
	node_t* root = create_node();
	inorder_tranversal(root);





}
