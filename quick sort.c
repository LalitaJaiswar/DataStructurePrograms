#include<stdio.h>

int partition(int A[],int First, int Last)
{
	int temp,Beg,End,j;
	
	End=A[Last];
	Beg=First-1;
	
	for(j=First;j<=Last;j++)
	{
		if(A[j]<End)
		{
			Beg++;
			temp=A[Beg];
			A[Beg]=A[j];
			A[j]=temp;
		}
	}
	Beg++;
	temp=A[Beg];
	A[Beg]=A[Last];
	A[Last]=temp;
	
	return Beg;	
}

void Quick_Sort(int A[], int First, int Last)
{
	int i,j;
	printf("\nCalling....");
	for(j=0;j<Last;j++){
		printf("%d ",A[j]);
	}
	i=partition(A,First,Last);
	Quick_Sort(A,First,i-1);
	Quick_Sort(A, i+1, Last);
}


int main()
{
	int n,i,j;	
	scanf("%d",&n);
	int A[n];	
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}	
	Quick_Sort(A,0,n);
	
	for(j=0;j<n;j++)
	{
		printf("%d",A[j]);
	}
}
