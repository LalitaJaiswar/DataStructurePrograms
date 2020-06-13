#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10];
	int i,j,r,c;
	clrscr();
	printf("Enter the order of matrix:\nRow=");
	scanf("%d",&i);
	printf("Column=");
	scanf("%d",&j);
	printf("Enter the element of matrix:");
	for(r=0;r<i;r++)
	{
		for(c=0;c<j;c++)
		{
		       scanf("%d",&a[r][c]);
		}
		printf("\n");
	}
	printf("Matrix is:\n");
	for(r=0;r<i;r++)
	{
	  for(c=0;c<j;c++)
	  {
	    printf(" %d ",a[r][c]);
	  }
	  printf("\n");
	}
	getch();
}