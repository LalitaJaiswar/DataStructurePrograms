#include<stdio.h>
#include<conio.h>
int partition(int[],int,int);
void quick_sort(int[],int,int);
void main()
{
		int i,n,arr[20];
	printf("Enter the no of element that you want to insert:");
	scanf("%d",&n);
	if(n>20)
	{
	printf("Sorry! max no of element is 20");
	return;
    } 
	printf("Enter %d Element:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	quick_sort(arr,0,n-1);
	printf("Sorted Array is:\n");
	for(i=0;i<n;i++)
	{
		printf(" %d ",arr[i]);
	}
}
void quick_sort(int a[],int lb,int ub)
{
	int pivot;
	if(lb<=ub)
	{
		 pivot=partition(a,lb,ub);
		 quick_sort(a,lb,pivot-1);
		 quick_sort(a,pivot+1,ub);
	}
}
int partition(int a[],int lb,int ub)
{
	int pivot_pos,pivot,l,r,temp,m;
	pivot=a[lb];
	l=lb;
	r=ub;
	while(l<=r)
	{
		if(l<=r && a[l]<=pivot)
		{
			l++;
		}
		if(a[r]>pivot)
		{
			r--;
		}
		if(l<r)
		{
			temp=a[r];
			a[r]=a[l];
			a[l]=temp;
		}
		/*printf("\nArray  is: ");
		for(m=0;m<=ub;m++)
		printf("%d ",a[m]);*/
	}
	a[lb]=a[r];
	a[r]=pivot;
	pivot_pos=r;
	return pivot_pos;
	
}
