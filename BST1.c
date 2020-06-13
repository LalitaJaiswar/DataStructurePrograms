#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *left,*right;
};
void insert(struct node*,int);
void delete1(struct node*);
void main()
{
	
}
void insert(struct node *root,int item)
{
	struct noode *newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=item;
	if(*root=='\0')
	{
		newNode->left='\0';
		newNode->right='\0';
		root=newNode;
	}
	else 
	{
	if(item<root->data)
	{
		insert(&(*root->left),item);
	}
	else
	{
		insert(&(*root->right),item);
	}
	}
}
void delete1(struct node *root,item)
{
	int found=0;
	struct node *parent,*x,*xsucc;
	if(*root=='\0')
	{
		printf("The BST is empty!");
		return;
	}
	search(root,item,&parent,&x,&xsucc);
	if(found==0)
	{
		printf("Data to be deleed is not found!");
		return;
	}
	else if(x->left=='\0' && x->right=='\0')
	{
		if(parent->right==x)
		  parent->right='\0';
	  else
		  parent->left='\0';
	  free(x);
	}
	else if(x->left!='\0' && x->right=='\0')
	{
	if(parent->left==x)
		parent->left=x->left;
	else
		parent->right=x->left;
	free(x);
	}
	else if(x->right!='\0' && x->left=='\0')
	{
		if(parent->left=x)
			parent->left=x->right;
		else
			parent->right=x->right;
		free(x);
	}
	else
	{
		parent=x;
	}
}
void search(struct node **root,int item,struct node **parent,struct node **x,int *found)
{
	struct node *q;
	*found=0;
	*parent='\0';
	while(q!='\0')
	{
		if(q->data==item)
		{
			*found=0;
			*x=q;
			return;
		}
		if(q->data,item)
		{
			*parent=q;
			q=q->left;
		}
		else
		{
			*parent=q;
			q=q->right;
		}
	}
}