#include<stdio.h>
int len(char[]);
int check(char[]);
char str[50],production[10][20]; 
int k=0,end,sig=0,pindex=0,n;
int main()
{
	int i;
	printf("Enter the no of Production:");
	scanf("%d",&n);
    for(i=0;i<n;i++){
    	scanf("%s",production[i]);
	}
    printf("\nEnter the string for checking:");
    scanf("%s",str);
    end=len(str);
    check(production[pindex]);
    if(sig==1)
    printf("\nString matches!");
    else
    printf("\nString does not match!");				
}
int check(char p[])
{
    int l=len(p),i,k2=k;
    for(i=0;i<l;i++)
    {
        if(p[i]>='A' && p[i]<='Z' && k!=end)
        {
            k=check(production[++pindex]);
        }
        else if(p[i]==str[k]){
            k++;
            if(k==end)
            sig=1;
        }
        else if(p[i]=='|'){
        	if(k<end)
        	k=k2;
        	else{
        		sig==1;
        		break;
			}
		}
        else
		{
        k=k2;
        sig=0;
        }
    }
    return k;
}
int len(char s[])
{
    int i,c=0;
for(i=0;s[i]!='\0';i++){
    c++;
}
return c;
}
