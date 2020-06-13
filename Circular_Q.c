#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void insert(int item);
void delete1();
void traverse();
int a[6],front=-1,rear=-1,N=6;
void main()
{
int sw,data,i=0;
p:
printf("1-Insert.\n2-Delete.\n3-Traverse\nSelect your choice:");
scanf("%d",&sw);
switch(sw)
{
case 1:
    printf("Enter the value that you want to insert:");
    scanf("%d",&data);
    insert(data);
    break;
case 2:
    delete1();
    break;
case 3:
    traverse();
    break;
default:
    printf("Invalid Choice!");
}
printf("Press 1 to continue:");
scanf("%d",&i);
if(i==1)
    goto p;
else
   getch();
}
void insert(int item)
{
    if(front==-1)
    {
        front=front+1;
        rear=rear+1;
        a[rear]=item;
        printf("%d is successfully inserted at %d\n",item,rear);
    }
    else if((rear+1)%N!=front)
    {
        rear=(rear+1)%N;
        a[rear]=item;
        printf("%d is successfully inserted at %d\n",item,rear);
    }
    else
    {
        printf("Queue Overflows!");
    }
}
void delete1()
{
    int ditem;
    if(front==-1)
        printf("Queue Underflows!");
    else
    {
        if(front==rear)
        {
         ditem=a[front];
         rear=-1;
         front=-1;
        }
        else
        {
            ditem=a[front];
            front=(front+1)%N;
        }
        printf("%d is successfully deleted",ditem);
    }
}
void traverse()
{
    int i;
    if(front==-1)
    {
    printf("Queue is Empty!");
    }
    else
    {
        i=front;
        //while((i+1)%N!=(rear+2)%N)
        while(i!=(rear+1)%N)
        {
            printf("  %d",a[i]);
            i=(i+1)%N;
        }
    }
}
