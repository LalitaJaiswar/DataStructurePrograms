#include<stdio.h>
int main(){
	int a[6],i,j,counter=1,c[6];
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<6;i++)
	{
		if(a[i]=='\0')
		{
			c[i]=0;
			printf("%d : %d, ",a[i],counter);
		continue;
		}
		for(j=i+1;j<6;j++)
		{
			if(a[i]==a[j])
			{
				a[j]='\0';
				counter++;
			}
		}
		c[i]=counter;
		//printf("%d : %d, ",a[i],counter);
		counter=1;
	}
	for(i=0;i<6;i++)
	{
		if(c[i]!=0)
		printf("\n%d : %d",a[i],c[i]);
	}
}
