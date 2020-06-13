#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0,k=0,mindex=1,c=0,count,n;
    printf("Enter the string size:");
    scanf("%d",&n);
    char pr[n],p[n][n],common[n];
    printf("Enter the Production rule:\nS->");
    scanf("%s",pr);
    printf("Inputted Production Rule is:\nS->");
    printf("%s\n",pr);
    for(i=0;i<n;i++)
    {
        if(pr[i]!='|')
        {
            p[j][k]=pr[i];
            k++;
        }
        else
		{
			p[j][k]='\0';
            j++;
            k=0;
        }
    }
    count=strlen(p[0])>strlen(p[1])?strlen(p[1]):strlen(p[0]);
    for(i=0;i<count;i++)
	{
		if(p[0][i]==p[1][i])
		{
			common[c]=p[0][i];
			c++;
		}
	}
	printf("Left factored production is:\n");
	printf("S->");
	for(i=0;i<c;i++)
	printf("%c",common[i]);
	printf("S\'\nS\'->");
	for(i=c;i<strlen(p[0]);i++)
	printf("%c",p[0][i]);
	printf("|");
	for(i=c;i<strlen(p[1]);i++)
    printf("%c",p[1][i]);
}

