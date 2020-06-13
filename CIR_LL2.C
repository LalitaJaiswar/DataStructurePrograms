#include<stdio.h>
#include<conio.h>
void finsert(int,*struct);
void traverse();
struct node
{
	int data;
	struct node *next;
};
struct node *start='\0';
struct node *last='\0';
void main()
{
	int s,d,i;
	p:
	clrscr();
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	printf("Enter the element that you want to insert:");
	scanf("%d",&d);
	ptr->data=d;
	printf("1.Insert at first\n2.Insert at last.\n3.Insert at specified location.\n4.Traverse\n5.Exit\n");
    scanf("%d",&s);
	switch(s)
	{
		case 1:
		finsert(d,ptr);
		break;
		/* case 2:
		printf("enter the element that you want to insert:");
		scanf("%d",&d);
		linsert(d);
		break;
		case 3:
		printf("enter the element that you want to insert:");
		scanf("%d",&d);
		locinsert(d);
		break; */
		case 4:
		traverse();
		break;
		default:
		printf("invalid Choice!");
	}
	printf("\nPress 1 to continue...");
	scanf("%d",&i);
	if(i==1)
	{
	goto p;
	}
	printf("Bye....");
	getch();
	}
void finsert(int newdata,struct node *ptr)
{
    if(start=='\0')
	{
		start=ptr;
		last=ptr;
		ptr->next=start;
	}
	else
	{
		ptr->next=start;
		start=ptr;
		last->next=ptr;
	}
	printf("%d is successfully inserted at %u location",ptr->data,ptr);
}
/* void linsert(int newdata)
{
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=newdata;
	if(start=='\0')
	{
     	start=ptr;
		last=ptr;
		ptr->next=start;
	}
	else
	{
		ptr->next=start;
		last->next=ptr;
		last=ptr;
	}
    printf("%d is successfully inserted at %u location",ptr->data,ptr);
}
void locinsert(int newdata)
{
    int i=1,loc;
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	printf("Enter location where you want to insert:");
	scanf("%d",&loc);
	ptr->data=newdata;	
	if(start=='\0')
	{
	    start=ptr;
		last=ptr;
		ptr->next=start;	
	}
	else if(loc==1)
	{
		ptr->next=start;
		start=ptr;
		last->next=ptr;
	}
	else
	{
		struct node *temp=start;
		while(i<loc-1)
		{
			temp=temp->next;
			if(temp==start)
			{
				printf("Specified location does not found!");
				getch();
				exit();
			}
			i++;
		}
		ptr->next=temp->next;
		temp->next=ptr;
		printf("%d is successfully inserted at %u location",ptr->data,ptr);
	}
} */
void traverse()
{
	int c=1;
	if(start=='\0')
		printf("\nLinked list is empty!");
	else
	{
		struct node *temp=start;
		printf("\n\nTraversed list is.......");
		do
		{
			printf("\n%d is stored at %u location and loc=%d",temp->data,temp,c);
			temp=temp->next;
			c++;
		}while(temp!=start);
	}
}


