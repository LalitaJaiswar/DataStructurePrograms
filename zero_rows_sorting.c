#include<stdio.h>
int main(){
	int row,col,i,j;
	scanf("%d%d",&row,&col);
	
	int arr[row][col];
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	//Solution
	int row_index[row],zero_count[row],count=0;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(arr[i][j]==0)
			count++;
		}
		row_index[i]=i;
		zero_count[i]=count;
		count=0;
	}
	/*for(i=0;i<row;i++){
		printf("\nrow=%d zero=%d",row_index[i],zero_count[i]);
	}*/
	int key1,key2;
	for(i=1;i<row;i++){
		key1=zero_count[i];
		key2=row_index[i];
		j=i-1;
		while(j>=0 && zero_count[j]>key1)
		{
			zero_count[j+1]=zero_count[j];
			row_index[j+1]=row_index[j];
			j=j-1;
		}
		zero_count[j+1]=key1;
		row_index[j+1]=key2;
	}
	for(i=0;i<row;i++)
	printf("\nRow: %d  %d",row_index[i],zero_count[i]);
}
