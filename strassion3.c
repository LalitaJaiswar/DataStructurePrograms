#include<stdio.h>
#include<conio.h>
void random1(long int[512][512],int,char);
void divide(int,int,int,int,int);
void multiply(int,int,int,int,int);
long int A[512][512],B[512][512],C[512][512];
void main()
{
	int n,il=0,ir,jl=0,jr,i,j;
	FILE *fp=fopen("C5.txt","w");
printf("Enter the size of matrix:");
scanf("%d",&n);
ir=n,jr=n;
random1(A,n,'A');
random1(B,n,'B');
divide(n,il,ir,jl,jr);
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		fprintf(fp,"%ld ",C[i][j]);
	}
	fprintf(fp,"\n");
}
fclose(fp);
}
void divide(int n,int il,int ir,int jl,int jr)
{
	int i,j;
	if(n>2)
	{
		divide(n/2,il,((il+ir)/2),jl,((jl+jr)/2));
		divide(n/2,il,((il+ir)/2),((jl+jr)/2),jr);
		divide(n/2,((il+ir)/2),ir,jl,((jl+jr)/2));
		divide(n/2,((il+ir)/2),ir,((jl+jr)/2),jr);
	}
	multiply(n,il,ir,jl,jr);
}
void multiply(int n,int il,int ir,int jl,int jr)
{
int A11,A12,A21,A22,B11,B12,B21,B22;
int p1,p2,p3,p4,p5,p6,p7;
int s1,s2,s3,s4,s5,s6,s7,s8,s9,s10;
//Calculation of A matrix's elements..
A11=A[il][jl];
A12=A[il][jl+1];
A21=A[il+1][jl];
A22=A[il+1][jl+1];
//Calculation of B matrix's elements..
B11=B[il][jl];
B12=B[il][jl+1];
B21=B[il+1][jl];
B22=B[il+1][jl+1];
//Calculation of s1,s2...
s1=B12-B22;s2=A11+A12;s3=A21+A22;s4=B21-B11;s5=A11+A22;
s6=B11+B22;s7=A12-A22;s8=B21+B22;s9=A11-A21;s10=B11+B12;
//Calculation of P1,p2...
p1=A11*s1;p2=s2*B22;p3=s3*B11;p4=A22*s4;
p5=s5*s6;p6=s7*s8;p7=s9*s10;
//Storing results in Matrix C....
C[il][jl]=p5+p4-p2+p6;
C[il][jl+1]=p1+p2;
C[il+1][jl]=p3+p4;
C[il+1][jl+1]=p5+p1-p3-p7;
}
void random1(long int arr[512][512],int n,char a)
{
	int i,j;
	int upper=5,lower=1,num;
	FILE *fp;
	if(a=='A')
	fp=fopen("A5.txt","w");
	else
	fp=fopen("B5.txt","w");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			num = (rand() % (upper - lower + 1)) + lower; 
			arr[i][j]=num;
			fprintf(fp,"%ld ",arr[i][j]);
		}
		fprintf(fp,"\n");
	}
	fclose(fp);
}
