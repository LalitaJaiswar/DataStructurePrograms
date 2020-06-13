#include<stdio.h>
#include<conio.h>
main()
{
    int bt[100],wt[100],tt[100],n,i,j,temp;
    float sum=0,awt,att;
    printf("\nHow many process u want to execute:");
    scanf("%d",&n);
    printf("Enter the burst time for %d processes:",n);
    for(i=0;i<n;i++)
        scanf("%d",&bt[i]);
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(bt[i]>bt[j])
            {
                temp=bt[i];
                bt[i]=bt[j];
                bt[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf(" %d ",bt[i]);
    }
    printf("\nExecution Sequence of processes:\nProcess no\t\tBurst Time\n");
    wt[0]=0;
    for(i=0;i<n;i++)
    {
        printf("%d\t\t\t%d\n",i+1,bt[i]);
        wt[i+1]=wt[i]+bt[i];
        sum=sum+wt[i];
    }
    awt=sum/n;
    sum=0;
    printf("\nProcess no\t\tWaiting Time\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t\t\t%d\n",i+1,wt[i]);
        tt[i]=wt[i]+bt[i];
        sum=sum+tt[i];
    }
    att=sum/n;
    printf("\nProcess no\t\tTurnaround Time\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t\t\t%d\n",i+1,tt[i]);
    }
    printf("Average Waiting Time:%.4f milisec\nAverage Turnaround Time:%.4f milisec\n\n",awt,att);
}
