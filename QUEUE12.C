#include<stdio.h>
#include<conio.h>
#define max 5
int rear=-1;
int front=-1;
int queue[max];
void insert();
void delete1();
void display();
void main()
{
int sw;
clrscr();
printf("\n\nQueue Operation\n................\n1.insert\n2.delete\nSelect your choice:");
scanf("%d",&sw);
switch(sw)
{
case 1:
insert();
break;
case 2:
delete1();
break;
default:
printf("Invalid Choice!");
}
getch();
}
void insert()
{
int item,i;
p:
if(rear>=max-1)
{
printf("Queue is full.");
}
else
{
printf("Enter value to insert:");
scanf("%d",&item);
if(front==-1)
{
front=0;
rear=0;
}
else
{
rear=rear+1;
}
queue[rear]=item;
printf("value is inserted successfully.\nPress 1 to continue\nPress 2 to delete\nPress 3 to display Queue:");
scanf("%d",&i);
if(i==1)
{
goto p;
}
else
if(i==2)
{
delete1();
}
else
if(i==3)
{
display();
}
else
{
exit();
}
}
}
void delete1()
{
int ditem,ch;
if(front==-1)
{
printf("Queue is empty");
}
else
{
ditem=queue[front];
if(front==rear)
{
front=-1;
rear=-1;
}
else
{
front=front+1;
}
printf("%d is deleted from Queue.\nPress 1 to dispaly Queue.",ditem);
scanf("%d",&ch);
if(ch==1)
display();
}
}
void display()
{
int i;
for(i=front;i<=rear;i++)
{
printf("%d  ",queue[i]);
}
}