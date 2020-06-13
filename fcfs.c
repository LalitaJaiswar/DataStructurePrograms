#include<stdio.h>
main()
{
    int n,q,w,avgwt,avgtt;
    printf("Please enter the no. of processes\n");
    scanf("%d",&n);
    int a[n],wt[n],tt[n],s=0,t=0;
    printf("Enter burst times\n");
    for(q=0;q<n;q++)
        scanf("%d",&a[q]);
    printf("Process No\tBurst Time\n");
    for(q=0;q<n;q++)
        printf("%d\t\t%d\n",q+1,a[q]);
    wt[0]=0;
    printf("Process No\tWaiting Time\n");
    printf("1\t\t%d\n",wt[0]);
    for(q=1;q<n;q++)
    {
        wt[q]=a[q-1]+wt[q-1];s=s+wt[q];
        printf("%d\t\t%d\n",q+1,wt[q]);
    }
    printf("Process No\tTurn Around Time\n");
     for(q=0;q<n;q++)
    {
        tt[q]=a[q]+wt[q];t=t+tt[q];
        printf("%d\t\t%d\n",q+1,tt[q]);
    }
    avgwt=s/n;avgtt=t/n;
    printf("\nAverage Waiting Time:%d\nAverage Turn Around Time:%d",avgwt,avgtt);
}
