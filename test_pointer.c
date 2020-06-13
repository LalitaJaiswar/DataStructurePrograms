#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10,b=9;
	int *p;
	int *q;
	p=&a;
	q=p;
	printf("a=%d\n  &a=%d\n  p=%d\n  *p=%d\n  &p=%d\n  q=%d\n  *q=%d",a,&a,p,*p,&p,q,*q);
}
