#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	struct node *left;
	int data;
	struct node *right;
};
struct node *root='\0';
int count=0;
void insert(struct node**,int);
void pretraverse(struct node*);
//typedef struct node Node; 
int main()
{
	int n,i,item;
	printf("Enetr the no element that you want to insert:");
	scanf("%d",&n);
	printf("Enter %d Element:",n);
	for(i=0;i<n;i++)
	{
	printf("\nEnter %d element:",i+1);
	scanf("%d",&item);	
	insert(&root,item);
	}
	printf("\nRoot=%u and left=%u and right=%u",root,root->left,root->right);
	printf("\n\nTraversing Started....\n");
	pretraverse(root);
	return 0;
	printf("\nAt the end of main!");
}
void insert(struct node **newptr,int item)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node*));
	if(*newptr==NULL)
	{
		temp->data=item;
		*newptr=temp;
		(*newptr)->left='\0';
		(*newptr)->right='\0';
		count++;
		printf("\n%d is successfully inserted at %u and count=%d and root=%u",item,temp,count,root); 
	}
	else if(count%2==0)
	{
		insert(&((*newptr)->right),item); 
		(*newptr)->left=NULL;
	}
	else if(count%2!=0)
	{
		insert(&((*newptr)->left),item);
		(*newptr)->right=NULL;
	}
	else
	printf("\nSorry unable to process!");
}
void pretraverse(struct node *ptr)
{
	int c=0;
		while(ptr!='\0')
		{
		printf("%d ",ptr->data);
		pretraverse(ptr->left);
		pretraverse(ptr->right);
		c++;
		if(c>5)
		break;
	}
}
