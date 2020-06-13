#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,item,flag1=0,flag2=0,success=0,failure=0,j,i,sig,f=0;
	printf("Enter the no of frames and pages:");
	scanf("%d %d",&n1,&n2);
	int fa[n1],pa[n2];
	for(i=0;i<n1;i++)
	{
		fa[i]='\0';
	}
	printf("Enter %d pages:",n2);
	for(i=0;i<n2;i++)
	{
		scanf("%d",&pa[i]);
	}
	while(1)
	{
	printf("Enter the demanded page:");
	scanf("%d",&item);
	for(i=0;i<n2;i++)
	{
		if(pa[i]==item)
		{
			flag1=1;
			break;
		}
	}
	if(flag1==1)
	{
		for(i=0;i<n1;i++)
		{
			if(fa[i]==item)
			{
				flag2=1;
				break;
			}
		}
		if(flag2==1)
		{
		success=success+1;	
		}
		else
		{
			for(j=0;j<n1;j++)
			{
				if(fa[j]=='\0')
				{
					fa[j]=item;
					f=1;
					break;
				}
			}
			if(f==0)
			{
				for(i=0;i<n1;i++)
				{
					fa[i]=fa[i+1];
				}
		fa[n1-1]=item;
			}
			failure=failure+1;			
		}
		printf("Now the frames are:");
		for(i=0;i<n1;i++)
		printf("%d ",fa[i]);
		printf("\nSuccess=%d\nFailure=%d\n",success,failure);
	}
	else
	{
		printf("Invalid Demand!");
	}
	printf("\nEnter 1 to continue:");
	scanf("%d",&sig);
	if(sig!=1)
	exit(0);
	f=0;
	flag1=0;
	flag2=0;
}
}
