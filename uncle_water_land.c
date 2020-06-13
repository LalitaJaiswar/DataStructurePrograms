#include<stdio.h>
int main()
{
	int row,col,i,j,k,l,sum1=0,sum2=0,tsum=0,tmax=0,max=0,frow=0,fcol=0,ans=0;
	
	scanf("%d%d",&row,&col);
	
	int arr[row][col];
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	
	/*for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");*/
	
	for(i=0,k=0;i<row;i++,k++){
		for(j=0,l=0;j<col;j++,l++)
		{
			
			sum1=sum1+arr[i][j];
			
			if(k<col && l<row)
			{
				sum2=sum2+arr[j][i];
			}
		}
		if(sum1>sum2)
		{
			max=sum1;
		}
		else
		{
			max=sum2;
		}
		
		if(tmax<=max)
		{
			printf("\nCol %d row %d and %d\n",frow,fcol,ans);
			if(max==sum1)
			{
				frow=i;
				ans=0;	
			}
			else
			{
				fcol=k;
				ans=1;
			}
			tmax=max;
		}
		sum1=0;
		sum2=0;
	}
	
	printf("\n\n");
	printf("%d %d\n",frow,fcol);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
		
		if(ans==0 && i==frow && arr[i][j]==1 )
			printf("L ");
		else if(ans==1 && j==fcol && arr[i][j]==1)
			printf("L ");
		else
			printf("W ");
			
		}
		printf("\n");
	}
	
}
