#include<stdio.h>
#include<conio.h>
void merge_sort(int[],int,int);
void merge(int[],int,int,int);
int inver=0;
void main()
{
	int i,n,arr[1000];
	FILE *fp;
	printf("Enter the no of element:");
	scanf("%d",&n);
	fp=fopen("ip.txt","w");
	for(i=0;i<n;i++)
	{
			arr[i]=rand() % (100 -1 + 1) + 1; 
			printf("%d  ",arr[i]);
			fprintf(fp,"%d ",arr[i]);
		}
	fclose(fp);	
	merge_sort(arr,0,n);
	printf("\nSorted Array is:\n");
	fp=fopen("op.txt","w");
	for(i=0;i<n;i++)
	{
		fprintf(fp,"%d ",arr[i]);
	}
	fclose(fp);
}
void merge_sort(int a[],int lb,int ub)
{
	int mid;
	if(lb<ub)
	{
		mid=(lb+ub)/2;
		merge_sort(a,lb,mid);
		merge_sort(a,mid+1,ub);
		merge(a,lb,mid,ub);
	}
}
void merge(int a[],int lb,int mid,int ub)
{
	int A[10],B[10],m1,m2,i,j,k=0;
	m1=mid-lb+1;
	m2=ub-mid;
	for(i=0;i<m1;i++)
	{
		A[i]=a[lb+i];
	}
	for(j=0;j<m2;j++)
	{
		B[j]=a[mid+j+1];
	}
	i=0;
	j=0;
	k=lb;
	while(i<m1 && j<m2)
	{
		if(A[i]<=B[j])
		{
			a[k]=A[i];
			i++;
			k++;
		}
		else
		{
			a[k]=B[j];
			j++; 
			k++;
			inver++;
		}
	}
    while(i<m1)
	{
		a[k]=A[i];
		i++;k++;
	}
	while(j<m2)
	{
		a[k]=B[j];
		j++;
		k++;
	}
}
