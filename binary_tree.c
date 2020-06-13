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
void preorder(struct node*);
void postorder(struct node*);
int count=0;
void main()
{
	int n,data,i;
	printf("Enter the no of Element that you want to insert:");
	scanf("%d",&n);
	printf("Enter %d element:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&data);
		insert(&root,data);
	}
	printf("Traversal started...\nInorder-----");
	inorder(root);
	printf("\nPreorder-----");
	preorder(root);
	printf("\nPostorder----");
	postorder(root);
	printf("\nEnd of main!");
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
		count++;
		printf("%d is successfully inserted at %u and root=%u\n",data,temp,root);
	}
	else if(count%2!=0)
	{
		insert(&(*ptr)->left,data);
		count++;
	}
	else
	{
		insert(&(*ptr)->right,data);
		count++;
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
void preorder(struct node *ptr)
{
	if(ptr!='\0')
	{
		printf(" %d ",ptr->info);
		preorder(ptr->left);
		preorder(ptr->right);
	}
}
void postorder(struct node *ptr)
{
	if(ptr!='\0')
	{
		postorder(ptr->left);
		postorder(ptr->right);
		printf(" %d ",ptr->info);
	}
}
