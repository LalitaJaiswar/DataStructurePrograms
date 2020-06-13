#include<stdio.h>
#include<conio.h>
#define max 2
int stack[max];
int top=-1;
void push();
void pop();
void main()
{
int sw;
clrscr();
printf("1.Push\n2.Pop\nSelect your choice:");
scanf("%d",&sw);
switch(sw)
{
case 1:
push();
break;
case 2:
pop();
break;
default:
printf("Invalid Choice!");
}
getch();
}
void push()
{
int item,a;
p:
if(top>=max-1)
{
printf("Stack Overflow.");
}
else
{
printf("Enter number to insert:");
scanf("%d",&item);
top=top+1;
stack[top]=item;
printf("Number is successfully inserted.\nPress 1 to continue.\nPress 2 to delete item.");
scanf("%d",&a);
if(a==1)
{
goto p;
}
else
if(a==2)
{
pop();
}
else
{
exit();
}
}
}
void pop()
{
int item1;
if(top==-1)
{
printf("Stack is Empty.");
}
else
{
item1=stack[top];
top=top-1;
printf("%d is successfully deleted",item1);
}
}