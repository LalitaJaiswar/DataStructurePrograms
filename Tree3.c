#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
struct node *left;
int data;
struct node *right;
};
int count=0;
void insert(struct node**,int);
//void pretraverse(struct node*);
//void delete1();
//void inTraverse();
void main()
{
struct node *root='\0';
int i=0,n,data2;
printf("Enter the no of element that you want of insert:");
scanf("%d",&n);
printf("Enter %d element....",n);
while(i<n)
{
    scanf("%d",&data2);
    printf(" Checking1...");
    insert(&root,data2);
    printf(" Checking2...");
    i++;
}
printf("\nTraversing....\n\n");
printf("\nFinished....");
getch();
}
void insert(struct node **q,int item)
{
  struct node *newd=(struct node*)malloc(sizeof(struct node*));
    printf(" Checking3...");
    if(*q==NULL)
    {
	printf(" Checking4... %d",q);
	newd->left='\0';
	newd->right='\0';
	newd->data=item;
	*q=newd;
	count++;
	printf("%d is successfully inserted at %u and count=%d",item,newd,count);
    }
    else if(count%2!=0)
    {
	printf(" Checking5...");
	insert(&(*q)->left,item);
	count++;
    }
    else
    {
	printf(" Checking6...");
	insert(&(*q)->right,item);
	count++;
    }
}
/*void pretraverse(struct node *q)
{
    int i=0;
    printf(" Within loop----%u",q);
    if((*q)!=NULL)
    {
	pretraverse(q->left);
	pretraverse(q->right);
        printf("%d  ",q->data);
    }
}*/
