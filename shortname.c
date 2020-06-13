#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,len,spc=0,l;
	printf("\nLet see short form of your name....\nPlease enter your name:");
	scanf("%[^\n]",str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]==' ')
		spc++;
	}
	printf("\n%c. ",str[0]);
	i=0,l=0;
	while(i<len && l<spc)
	{
		if(str[i]==' ')
		{
			if(l!=spc-1)
		    printf("%c. ",str[i+1]);
		l++;
	    }
		i++;
	}
	while(i<len)
	{
	printf("%c",str[i]);
	i++;
}
}
