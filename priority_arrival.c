#include<stdio.h>
int main()
{
int i,n,p[10]={1,2,3,4,5,6,7,8,9,10},min,k=1,btime=0;
printf("\nEnter the No. of processes :");
scanf("%d",&n);
int bt[n],temp,j,at[n],wt[n],tt[n],pri[n],ta=0,sum=0;
float wavg=0,tavg=0,tsum=0,wsum=0;
printf(" -------Shortest Job First Scheduling-------\n");
for(i=0;i<n;i++)
{
printf("Enter the burst time of %d process :",i+1);
scanf(" %d",&bt[i]);
printf("Enter the arrival time of %d process :",i+1);
scanf(" %d",&at[i]);
printf("Enter the priority of %d process :",i+1);
scanf(" %d",&pri[i]);
}
 
/*Sorting According to Arrival Time*/
 
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(at[i]<at[j])
{
temp=p[j];
p[j]=p[i];
p[i]=temp;
temp=at[j];
at[j]=at[i];
at[i]=temp;
temp=bt[j];
bt[j]=bt[i];
bt[i]=temp;
temp=pri[j];
pri[j]=pri[i];
pri[i]=temp;
}
}
}
/*Arranging the table according to Burst time,
Execution time and Arrival Time
Arrival time <= Execution time
*/
 
for(j=0;j<n;j++)
{
btime=btime+bt[j];
min=pri[k];
for(i=k;i<n;i++)
{
if (btime>=at[i] && pri[i]<min)
{
temp=p[k];
p[k]=p[i];
p[i]=temp;
temp=at[k];
at[k]=at[i];
at[i]=temp;
temp=bt[k];
bt[k]=bt[i];
bt[i]=temp;
temp=pri[k];
pri[k]=pri[i];
pri[i]=temp;
}
}
k++;
}
wt[0]=0;
for(i=1;i<n;i++)
{
sum=sum+bt[i-1];
wt[i]=sum-at[i];
wsum=wsum+wt[i];
}
 
wavg=(wsum/n);
for(i=0;i<n;i++)
{
ta=ta+bt[i];
tt[i]=ta-at[i];
tsum=tsum+tt[i];
}
 
tavg=(tsum/n);
 
printf("************************");
printf("\nLeast number has highest priority.");
printf("\nProcess\t Burst\t Arrival\tPriority\t Waiting\t Turn-around" );
for(i=0;i<n;i++)
{
printf("\n p%d\t %d\t %d\t\t %d\t\t\t%d\t\t%d",p[i],bt[i],at[i],pri[i],wt[i],tt[i]);
}
 
printf("\n\nAVERAGE WAITING TIME : %f",wavg);
printf("\nAVERAGE TURN AROUND TIME : %f",tavg);
return 0;
}

