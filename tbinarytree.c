// C program to demonstrate insert operation in binary search tree 
#include<stdio.h> 
#include<stdlib.h> 
int count=0;
struct node 
{ 
	int key; 
	struct node *left, *right; 
}; 

// A utility function to create a new BST node 
struct node *newNode(int item) 
{ 
	struct node *temp = (struct node *)malloc(sizeof(struct node)); 
	temp->key = item; 
	temp->left = temp->right = NULL; 
	count++;
	return temp; 
} 

// A utility function to do inorder traversal of BST 
void inorder(struct node *root) 
{ 
	if (root != NULL) 
	{ 
		inorder(root->left); 
		printf("%d ", root->key); 
		inorder(root->right); 
	} 
} 

/* A utility function to insert a new node with given key in BST */
struct node* insert(struct node* node, int key) 
{ 
	/* If the tree is empty, return a new node */
	if (node == NULL) return newNode(key); 

	/* Otherwise, recur down the tree */
	if (count%2==0) 
		node->left = insert(node->left, key); 
	else 
		node->right = insert(node->right, key); 

	/* return the (unchanged) node pointer */
	return node; 
} 

// Driver Program to test above functions 
int main() 
{ 
	/* Let us create following BST 
			50 
		/	 \ 
		30	 70 
		/ \ / \ 
	20 40 60 80 */
	int n,data,i;
	struct node *root = NULL; 
	root = insert(root, 1); 
	scanf("%d",&n);
	printf("Enter %d element:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&data);
		insert(root,data);
	}

	// print inoder traversal of the BST 
	inorder(root); 

	return 0; 
} 

