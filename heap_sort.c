#include<stdio.h>
#include<conio.h>
void heap_sort(int[],int );
void heapify(int[],int,int);
void buildMaxHeap(int[],int);
int main()
{
	int i,a[20],n;
	printf("Enter the no of element that you want to insert:");
	scanf("%d",&n);
	printf("Enter %d Element:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	heap_sort(a,n);
	printf("Sorted Array is:\n");
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
	return 0;
}
void heap_sort(int a[], int n)
{
	int i,temp,j;
    buildMaxHeap(a,n);	
	for(i=n-1;i>0;i--)
	{
		temp=a[i];
		a[i]=a[0];
		a[0]=temp;
	    n=n-1;
		heapify(a,n,0);
	}	
	
}
void buildMaxHeap(int a[],int n)
{
    int i;
	for(i=n/2;i>=0;i--)
    {
	heapify(a,n,i);
	}
}
void heapify(int a[],int n,int i )
{
	int left,right,largest,temp;
	largest=i;
	left=2*i+1;
	right=2*i+2;	
	if(left<n && a[left]>a[largest])
	{
		largest=left;
	}
	if(right<n && a[right]>a[largest])
	{
		largest=right;
	}
	if(largest!=i)
	{
		temp=a[i];
		a[i]=a[largest];
		a[largest]=temp;	
		heapify(a,n,largest);
    }
}
