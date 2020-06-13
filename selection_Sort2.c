#include<stdio.h>
#include<conio.h>
void select_sort(int[],int);
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
	select_sort(arr,n);
	printf("Sorted Array is:");
	for(i=0;i<n;i++)
	{
		printf(" %d ",arr[i]);
	}
}
void select_sort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<=n-1;i++)
	{
		for(j=i+1;j<=n-1;j++)
		{
			if(a[i]>a[j])
		    {
		    	temp=a[i];
		    	a[i]=a[j];
		    	a[j]=temp;
			}	
		}
	}
}
