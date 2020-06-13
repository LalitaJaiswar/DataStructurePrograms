#include<stdio.h>
main()
{
	int n,i,j,btime=0,k=1;
	printf("\nEnetr the no of processes:");
	scanf("%d",&n);
	int at[n],bt[n],pri[n];
	printf("Enetr Arrival time, Burst Time and Priority for each process:");
	for(i=0;i<n;i++)
	{
	printf("Enter Arrival time for Process %d: ",i+1);
	scanf("%d",&at[i]);	
	printf("Enter Busrt time for Process %d: ",i+1);
	scanf("%d",&bt[i]);	
	printf("Enter priority for Process %d: ",i+1);
	scanf("%d",&pri[i]);	
	jb[i]=i+1;
	}
	//Sorting according to arrival time....
	for(j=0;j<n;j++)
	{
		for(i=0;i<n-j-1;i++)
		{
			if(at[i]>at[i+1])
			{
				temp=at[i];
				at[i]=at[i+1];
				at[i+1]=temp;
				temp=bt[i];
				bt[i]=bt[i+1];
				bt[i+1]=temp;
				temp=pri[i];
				pri[i]=pri[i+1];
				pri[i+1]=temp;
				temp=jb[i];
				jb[i]=jb[i+1];
				jb[i+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		btime=btime+bt[i];
		min=pri[k];
		for(j=k;j<n;j++)
		{
			if(btime>=at[j] && pri[j]<min)
			{
				
			}
		}
	}
}
