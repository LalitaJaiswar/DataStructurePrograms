#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void add(float[],int);
void sub(float[],int);
void mul(float[],int);
void div1(float[],int);
void main()
{
	float a[20];
	int n,sw,i;
	while(1)
	{
	printf("\n1:Addition\n2:Subtraction\n3:Mutiplication\n4:Division\nSelect your choice:");
	scanf("%d",&sw);
	printf("How many numbers you want to Calculate:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%f",&a[i]);
	switch(sw)
	{
		case 1:
			add(a,n);
			break;
		case 2:
			sub(a,n);
			break;
		case 3:
		    mul(a,n);
		    break;
		case 4:
			div1(a,n);
			break;
		default:
			exit(0);
	}
}
	
}
void add(float arr[],int N)
{
	int i=0;
	float sum=0;
	while(i<N)
	{
	sum=sum+arr[i];
	printf("%g",arr[i]);
	if(i<N-1){printf(" + ");
	}
	i++;	
	}
	printf(" = %.4f",sum);
}
void sub(float arr[],int N)
{
	
	int i=1;
	float res=arr[0],temp=0;
	printf("%g - ",res);
	while(i<N)
	{
	temp=temp+arr[i];
	printf("%g",arr[i]);
	if(i<N-1){printf(" - ");
	}
	i++;	
	}	
	res=res-temp;
	printf(" = %.4f",res);
}
void mul(float arr[],int N)
{
	int i=0;
	float res=1;
	while(i<N)
	{
	res=res*arr[i];
	printf("%g",arr[i]);
	if(i<N-1){printf(" x ");
	}
	i++;	
	}
	printf(" = %.4f",res);	
}
void div1(float arr[],int N)
{
	int i=1;
	float res=arr[0];
	printf("%g / ",res);
	while(i<N)
	{
	res=res/arr[i];
	printf("%g",arr[i]);
	if(i<N-1)printf(" / ");	
	i++;	
	}
	printf(" = %.4f",res);	
}
