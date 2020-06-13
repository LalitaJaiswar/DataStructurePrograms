#include<stdio.h>
#include<conio.h>
void insertion_sort(int a[],int);
int inver=0;
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
	insertion_sort(arr,n);
	printf("Sorted Array is:");
	for(i=0;i<n;i++)
	{
		printf(" %d ",arr[i]);
	}
	printf("%d",inver);
}
void insertion_sort(int a[],int n)
{
	int i,j,key,temp;
	for(i=1;i<=n-1;i++)
	{
	key=a[i];
	j=i-1;
	while(j>=0 && a[j]>key)
	{
	  a[j+1]=a[j];
	  j=j-1;	
	  inver++;
		//	printf("\n%d and %d\n",A[i],B[j]);
	}	
	a[j+1]=key;
	}
}
