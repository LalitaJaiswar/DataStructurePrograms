#include<stdio.h>
int main(){
	int n1,n2;
	scanf("%d %d",&n1,&n2);
	int a[n1][n2],i,j,k,l,max=0,sum1=0,sum2=0,row=0,col=0,tmax=0,ans=0;
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0,k=0;i<n1;i++,k++)
	{
		for(j=0,l=0;j<n2;j++,l++)
		{
		sum1=sum1+a[i][j];
		if(k<n2 && l<n1)
		sum2=sum2+a[j][i];
		}
	if(sum1>sum2){
		max=sum1;
	}
	else{
		max=sum2;
	}
	if(tmax<=max){
		//printf("\nNow tmax=%d and max=%d",tmax,max);
		if(max==sum1){
		row=i;
		ans=0;
		}
		else{
		col=k;
		ans=1;}
		tmax=max;
	}
	sum1=0;
	sum2=0;
}
/*if(ans==0)
printf("Row=%d\n",row);
else
printf("Col=%d\n",col);*/
printf("\nAnswer:\n");
for(i=0;i<n1;i++){
	for(j=0;j<n2;j++){
		if(ans==0 && i==row && a[i][j]==1)
		printf("L ");
		else if(ans==1 && j==col && a[i][j]==1)
		printf("L ");
		else
		printf("W ");
	}
	printf("\n");
}
//printf("r=%d and c=%d",row,col);
}
