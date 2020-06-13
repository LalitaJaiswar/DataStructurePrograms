#include<stdio.h>
int len(char[]);
int check(char[]);
char str1[50],str2[50],str[50];
char production[10][20]; 
int k=0,end,sig=0,pindex=0,n;
int main()
{
	int i;
	printf("Enter the no of Production:");
	scanf("%d",&n);
    for(i=0;i<n;i++){
    	scanf("%s",production[i]);
	}
	printf("\nInputted Production are:");
	for(i=0;i<n;i++){
    	printf("\n%s",production[i]);
	}
    printf("\nEntr the string for checking:");
    scanf("%s",str);
    //printf("%s  %s  %s",str1,str2,str);
    end=len(str);
    printf(" %d ",end);
    check(production[pindex]);
    if(sig==1)
    printf("\nString matches!");
    else
    printf("\nString does not match!");				
}
int check(char p[])
{
    int l=len(p),i,k2=k;
    //printf("%c",p[0]);
    for(i=0;i<l;i++)
    {
    	printf("\nk=%d and end=%d\n",k,end);
        if(p[i]>='A' && p[i]<='Z' && k!=end)
        {
        	printf("\nCalling new function with k=%d\n",k);
            k=check(production[++pindex]);
            printf("\nReturned from function with k=%d\n",k);
        }
        else if(p[i]==str[k]){
            printf("\nMatch! for p=%c and s=%c and k=%d\n",p[i],str[k],k);
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
        	printf("Switching..");
		}
        else{
        printf("\nError for p=%c s=%c and i=%d and l=%d",p[i],str[k],i,l);
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
