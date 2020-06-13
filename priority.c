#include<stdio.h>
main()
{
	int n,i,j,temp=0;
	printf("\nEnter the no of Processes:");
	scanf("%d",&n);
	int jb[n],pr[n],bt[n],wt[n],tt[n];
	float avgtt=0,avgwt=0;
	printf("\nEnter burst time and priority for %d processes:");
	for(i=0;i<n;i++)
	{
		printf("\nEnter busrt time for Process %d: ",i+1);
		scanf("%d",&bt[i]);
		printf("Enter priority for Process %d: ",i+1);
		scanf("%d",&pr[i]);	
		jb[i]=i+1;	
	}
	printf("Before Sortnig....\n");
	for(i=0;i<n;i++)
	printf("%d  ",pr[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(pr[j]>pr[j+1])
			{	
			temp=pr[j];
			pr[j]=pr[j+1];
			pr[j+1]=temp;
			temp=bt[j];
			bt[j]=bt[j+1];
			bt[j+1]=temp;
			temp=jb[j];
			jb[j]=jb[j+1];
			jb[j+1]=temp;
			}
		}
	}
	wt[0]=0;
	for(i=1;i<n;i++)
	{
		wt[i]=bt[i-1]+wt[i-1];
		avgwt=avgwt+wt[i];
	}
	for(i=0;i<n;i++)
	{
		tt[i]=bt[i]+wt[i];
		avgtt=avgtt+tt[i];
	}
	printf("\nAfter Sortnig....\n");
	for(i=0;i<n;i++)
	printf("%d  ",pr[i]);
	printf("\nProcess No\tPriority\tBurst Time\tWaiting Time\tT Time\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n",jb[i],pr[i],bt[i],wt[i],tt[i]);
	}
	printf("Average Waiting Time:%f\nAverage Turnaround Time:%f",(avgwt/n),(avgtt/n));
}
