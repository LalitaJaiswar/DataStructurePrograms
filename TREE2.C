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
struct node* insert(struct node *tree,int);
typedef struct node Node;
void pretraverse(Node*);
//void delete1();
//void inTraverse();
int main()
{
int i=0,n,data2;
printf("Enter the no of element that you want of insert:");
scanf("%d",&n);
printf("Enter %d element....",n);
while(i<n)
{
	printf("\nPlease enter an element:");
    scanf("%d",&data2);
    root=insert(root,data2);
    i++;
}
return 0;
}
struct node* insert(Node *q,int item)
{
  struct node *newd=(Node*)malloc(sizeof(Node*));
    printf(" \n At the start of insert function....\n");
    if(q=='\0')
    {
    q=newd;
	q->left='\0';
	q->right='\0';
	q->data=item;
	printf("\nWithin case1... %d\n\n",q->right);
	count++;
	printf("%d is successfully inserted at %u and count=%d",item,newd,count);
    }
    else if(count%2!=0)
    {
	q->left=insert(q->left,item);
	printf("\nUP....Within count2!=0   ... count=%d\n left=%u and right=%u",count,q->left,q->right);
	q->right='\0';
		printf("\nDOWN...Within count2!=0   ... count=%d\n left=%u and right=%u",count,q->left,q->right);
    }
    else
    {
	q->right=insert(q->right,item);
	printf("\nUP.....Within count2==0  ..... \n right= %u and left=%u",q->right,q->left);
    }
    return q;
}
void pretraverse(struct node *q)
{
    int i=0;
    printf(" Within loop----%u",q);
    if(q!='\0')
    {
	pretraverse(q->left);
	pretraverse(q->right);
        printf("%d  ",q->data);
    }
}
