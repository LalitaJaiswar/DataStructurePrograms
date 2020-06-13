#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* link;
};
struct node* root = NULL;
int len=0;
void append(void);
void addatbegin(void);
void addatafter(void);
int length(void);
void display(void);
void delete1(void);
void main()
{
int ch;
while(1)
{
printf("\nEnter the Operation in Linked list :\n");
printf("1.Append\n");
printf("2.Addatbegin\n");
printf("3.Addatafter\n");
printf("4.Length\n");
printf("5.Display\n");
printf("6.Delete\n");
printf("7.exit\n");

printf("Enter your choice\n");
scanf("%d",&ch);

switch(ch)
{
case	1 : append();
break;

case	2	:	addatbegin();
break;

case 3 :	addatafter();
break;

case 4 :	len = length();
			printf("Length: %d",len);
			break;

case 5 : display();
break;

/*case 6	:	delete1();
break;*/

case 7	:	exit(1);

default	:	printf("Enter number is invalid\n");

}	
}	
}

void append()
{
int item;
struct node* temp;
temp = (struct node*)malloc(sizeof(struct node));

printf("Enter node data : \n");
scanf("%d",&item);
temp->data=item;
temp->link = NULL;
if(root==NULL)
{
root = temp;
}
else
{
struct node* p;
p = root;
while(p->link != NULL)
{
p = p->link;
}
p->link = temp;	
}
}

int length()
{
int count = 0;
struct node* temp=root;
while(temp!= NULL)
{
temp = temp->link;
count++;
}
return count ;
}

void display()
{
struct node* temp;
temp=root;
if(root == NULL)
{
printf("List is empty.\n");
}
else
{
printf("\nList is:\n");
while(temp != NULL)
{
printf("%d -->",temp->data );
temp = temp->link;	
}

printf("\n\n");	
}
}

void addatbegin(void)
{

}

void addatafter(void)
{

}

void delete1(void)
{

}

