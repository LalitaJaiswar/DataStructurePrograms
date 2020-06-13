#include<stdio.h>
#include<conio.h>
int a[7]={10,9,8,7,6,5,4};
void max_heap(int);
void build_max_heap();
void heap_sort();
int main()
{
	int i;
    printf("Element of array is:\n");
for(i=0;i<7;i++)
{
	printf("  %d",a[i]);
}
heap_sort();
printf("Sorted array is:\n");
for(i=0;i<7;i++)
{
	printf("     %d",a[i]);
}
return 0;
}
void max_heap(int i)
{
	int l,r,largest,temp;
	l=2*i;
	r=2*i+1;
	if(l<=7 && a[l]>a[i])
	{
	largest=l;
	}
	else
	{
		largest=i;
	}
	if(r<=7 && a[r]>a[largest])
	{
		largest=r;
	}
	if(largest!=i)
	{
	temp=a[i];
    a[i]=a[largest];
    a[largest]=temp;
	max_heap(largest);
	}
}
void build_max_heap()
{
	int i=7/2;
	while(i>0)
	{
		max_heap(i);
		i--;
	}
}
void heap_sort()
{
	int i,temp;
	build_max_heap();
	for(i=7;i>1;i--)
	{
		temp=a[i];
		a[i]=a[1];
		a[1]=temp;
		max_heap(1);
	}
}
