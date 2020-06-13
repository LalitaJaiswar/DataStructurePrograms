#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	struct node *left;
	int info;
	struct node *right;
};
struct node *root='\0';
void insert(struct node**,int);
void inorder(struct node*);
void delete1(struct node *ptr,int item);
void delnew(struct node*,struct node*,int);
void search(struct node**,int,struct node**,struct node**,int*);
void traverse(struct node*);
void main()
{
	int n,data,i,ddata;
	printf("Enter the no of Element that you want to insert:");
	scanf("%d",&n);
	printf("Enter %d element:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&data);
		insert(&root,data);
	}
	printf("Traversed Tree is...\n");
	inorder(root);
	printf("\nEnter the no of item that you want ot delete:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter Element:");
	scanf("%d",&ddata);
	delete1(root,ddata);
    }
	printf("\nNow the Tree is...\n");
	inorder(root);
	printf("\nNew Traversal....\n");
	traverse(root);
}
void insert(struct node **ptr,int data)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	if(*ptr=='\0')
	{
		temp->info=data;
		temp->left='\0';
		temp->right='\0';
		*ptr=temp;
		printf("%d is successfully inserted at %u\n",data,temp);
	}
	else if(data<(*ptr)->info)
	{
		insert(&(*ptr)->left,data);
	}
	else
	{
		insert(&(*ptr)->right,data);
	}
}
void inorder(struct node *ptr)
{
	
	if(ptr!='\0')
	{
		inorder(ptr->left);
		printf(" %d ",ptr->info);
		inorder(ptr->right);
	}
}
void delete1(struct node *ptr,int item)
{
	int found=0;
	struct node *parent,*x,*xsucc;
	if(ptr=='\0')
	{
		printf("BST is Empty!");
		return;
	}
	search(&ptr,item,&parent,&x,&found);
	if(found==0)
	{
		printf("Data to be deleted not found!");
		return;
	}
	if(x->left=='\0' && x->right=='\0')
	{
		if(parent!='\0')
		{
		if(parent->right==x)
		parent->right='\0';
		else
		parent->left='\0';
	    }
	    else
	    root='\0';
		printf("\n%u  with %d data deleted successfully!",x,x->info);
		free(x);
		return;
	}
	if(x->left!='\0' && x->right=='\0')
	{
	    if(parent!='\0')
		{		
		if(parent->left==x)
		parent->left=x->left;
		else
		parent->right=x->left;
	    }
	    else
	    	root=x->left;
		printf("\n%u  with %d data deleted successfully!",x,x->info);
		free(x);
		return;
	}
if(x->right!='\0' && x->left=='\0')
{
	if(parent!='\0')
	{
	if(parent->left==x)
	parent->left=x->right;
	else
	parent->right=x->right;
    }
    else
      root=x->right;
	printf("\n%u  with %d data deleted successfully!",x,x->info);
	free(x);
	return;
}
if(x->left!='\0' && x->right!='\0')
{
	parent=x;
	xsucc=x->right;
	while(xsucc->left!='\0')
	{
		parent=xsucc;
		xsucc=xsucc->left;
	}
	x->info=xsucc->info;
	xsucc->info=item;
	delnew(xsucc,parent,item);
}
}
void delnew(struct node *x,struct node *parent,int item)
{
	if(x->right!='\0' && x->left=='\0')
   {
	if(parent->left==x)
	parent->left=x->right;
	else
	parent->right=x->right;
   }
   else
	{
		if(parent->right==x)
		parent->right='\0';
		else
		parent->left='\0';
	}
	printf("\n%u  with %d data deleted successfully!",x,x->info);
	free(x);
}
void search(struct node **ptr,int item,struct node **parent,struct node **x,int *found)
{
	struct node *q;
	q=*ptr;
	*parent='\0';
	*x='\0';
	while(q!='\0')
	{
		if(q->info==item)
		{
			*found=1;
			*x=q;
			return;
		}
		if(q->info>item)
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
void traverse(struct node *ptr)
{
	struct node *cur=ptr;
	struct node *pre,*temp;
	while(cur!='\0')
	{
		if(cur->left=='\0')
		{
			printf("%d  ",cur->info);
			cur=cur->right;
		}
		else
		{
			pre=cur->left;
			while(pre->right!='\0')
			{
				pre=pre->right;
			}
			pre->right=cur;
			temp=cur;
			cur=cur->left;
			temp->left='\0';
		}
	}
}
