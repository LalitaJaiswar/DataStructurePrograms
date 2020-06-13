#include<stdio.h>
#include<conio.h>
void multi(int);
void rangenerator(int[512][512],int,char);
int a[512][512],b[512][512],c[512][512];
void main()
{
	int n,i,j;
	printf("\nEnter the size of square matix:");
	scanf("%d",&n);
	FILE *fp=fopen("C5.txt","w");
    rangenerator(a,n,'A');
	rangenerator(b,n,'B');
	multi(n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			fprintf(fp,"%d ",c[i][j]);
		}
		fprintf(fp,"\n");
	}	
	fclose(fp);	
}
void rangenerator(int arr[512][512],int n,char c)
{
	int i,j;
	FILE *fp;
	if(c=='A')
	fp=fopen("A5.txt","w");
	else
	fp=fopen("B5.txt","w");
	int upper=5,lower=1,num;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			num = (rand() % (upper -lower + 1)) + lower; 
			arr[i][j]=num;
			fprintf(fp,"%d ",arr[i][j]);
		}
		fprintf(fp,"\n");
	}
	fclose(fp);
}
void multi(int n)
{
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=0;
			for(k=0;k<n;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
	}
}
