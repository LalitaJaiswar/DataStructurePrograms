#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
void f_insert(int);
void l_insert(int);
void traverse();
void loc_insert(int,int);
struct node
{
	struct node *prev;
	int data;
	struct node *next;
};
struct node *start='\0';
int main()
{
	int s,d,i,loc;
	p:
	printf("enter the element that you want to insert:");
	scanf("%d",&d);
	printf("1.Insert at first\n2.Insert at last.\n3.Insert at specified location.\n4.Traverse\n5.Exit\n");
    scanf("%d",&s);
	switch(s)
	{
		case 1:
		f_insert(d);
		break;
		case 2:
		l_insert(d);
		break;
		case 3:
		printf("\nEnter the location where you want to insert:");
		scanf("%d",&loc);
		loc_insert(d,loc);
		break;
		case 4:
		traverse();
		break;
		default:
		printf("Invalid Choice!");
	}
	printf("\nPress 1 to continue...");
	scanf("%d",&i);
	if(i==1)
	{
	goto p;
	}
	printf("Bye....");
	return 0;
}
void f_insert(int item)
{
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=item;
	if(start=='\0')
	{
		start=ptr;
		ptr->next='\0';
		ptr->prev='\0';
	}
	else
	{
		ptr->next=start;
		ptr->prev='\0';
		start->prev=ptr;
		start=ptr;
	}
	printf("%d is successfully at %u location.",ptr->data,ptr);
}
void l_insert(int item)
{
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=item;
	ptr->next='\0';
	if(start=='\0')
	{
		start=ptr;
		ptr->prev='\0';
	}
	else
	{
		struct node *temp=start;
		while(temp->next!='\0')
		{
			temp=temp->next;
			printf("\n%u",temp);
		}
		temp->next=ptr;
		ptr->prev=temp;
	}
	printf("%d is successfully at %u location.",ptr->data,ptr);
}
void loc_insert(int item,int loc)
{
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	int i=1;
	ptr->data=item;
	if(start=='\0' || loc==1)
	{
		ptr->next=start;
		start->prev=ptr;
		start=start->next;
		ptr->prev='\0';
	}
	else
	{
		struct node *temp=start;
		while(i<loc-1)
		{
		temp=temp->next;
		if(temp=='\0')
		{
			printf("Sorry,specified location does not found!");
			getch();
			exit(0);
		}
		i=i+1;
		}
		temp->next->prev=ptr;
		ptr->next=temp->next;
		ptr->prev=temp;
		temp->next=ptr;
	}
	printf("%d is succrssfully inserted at %u",ptr->data,ptr);
}
void traverse()
{
	int c=1;
	if(start=='\0')
		printf("Linked list is empty!");
	else
	{
		struct node *temp=start;
		while(temp!='\0')
		{
			printf("\n%d is stored at %u location.",temp->data,temp);
			temp=temp->next;
		    c++;
			if(c==10)
				break;
		}
	}
}
