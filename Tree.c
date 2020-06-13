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
	printf("\n\nTraversing Started....\n");
	pretraverse(root);
	return 0;
	printf("\nAt the end of main!");
}
void insert(struct node **newptr,int item)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node*));
	if(*newptr=='\0')
	{
		temp->data=item;
		temp->left='\0';
		temp->right='\0';
		*newptr=temp;
		count++;
		printf("\n%d is successfully inserted at %u and count=%d and root=%u",item,temp,count,root); 
	}
	else if(count%2==0)
	{
		insert(&((*newptr)->right),item); 
	}
	else if(count%2!=0)
	{
		insert(&((*newptr)->left),item);
	}
}
void pretraverse(struct node *ptr)
{
	int c=0;
	/*printf("Within Pretraverse()...");
	if(ptr=='\0')
	printf("Tree is Empty!");*/
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
