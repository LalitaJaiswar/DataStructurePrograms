#include<stdio.h>
#include<conio.h>
void sort(int a[],int);
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
	sort(arr,n);
	printf("Sorted Array is:\n");
	for(i=0;i<n;i++)
	{
		printf(" %d ",arr[i]);
	}
}
void sort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-i-1;j++)
		{
			if(a[j]>=a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
