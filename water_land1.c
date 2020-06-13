#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n][n],i,j,k,max=0,sum1=0,sum2=0,row=0,col=0,tmax=0,ans=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		sum1=sum1+a[i][j];
		sum2=sum2+a[j][i];
	}
	if(sum1>sum2){
		max=sum1;
	}
	else{
		max=sum2;
	}
	if(tmax<max){
		printf("\nNow tmax=%d and max=%d",tmax,max);
		if(max==sum1){
		row=i;
		ans=0;
		}
		else{
		col=i;
		ans=1;}
		tmax=max;
	}
	sum1=0;
	sum2=0;
}
if(ans==0)
printf("Row=%d",row);
else
printf("Col=%d",col);
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		if(ans==0 && i==row && a[i][j]==1)
		printf("L ");
		else if(ans==1 && j==col && a[i][j]==1)
		printf("L ");
		else
		printf("W ");
	}
	printf("\n");
}
printf("r=%d and c=%d",row,col);
}
