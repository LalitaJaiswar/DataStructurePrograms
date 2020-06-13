#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,j,temp;
	printf("Enter the no of Process:");
	scanf("%d",&n);
	int bt[n],at[n],p[n],wt[n],tt[n];
	printf("Enter the Burst time and Arrival time for Each process:");
	for(i=0;i<n;i++)
	{
		printf("\nEnter Arrival time for process%d: ",i+1);
		scanf("%d",&at[i]);
		printf("Enter Busrt time for process%d: ",i+1);
		scanf("%d",&bt[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(at[i]>at[j])
			{
				temp=at[i];
				at[i]=at[j];
				at[j]=temp;
				temp=bt[i];
				bt[i]=bt[j];
				bt[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("  %d ",at[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("  %d ",bt[i]);
	}
	wt[0]=0;	
	for(i=1;i<n;i++)
	{
		wt[i]=bt[i-1]+wt[i-1];
		if(wt[i])
	}
}
