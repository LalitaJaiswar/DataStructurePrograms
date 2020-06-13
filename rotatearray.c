#include<stdio.h>
void rotate(int a[],int n,int d){
    while(d--){
        int i,j,first=a[0];
        for(i=0;i<n-1;i++)
        a[i]=a[i+1];
        a[i]=first;
        
    }
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,k;
	    scanf("%d %d",&n,&k);
	    int a[n],i;
	    for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	    rotate(a,n,k);
	    for(i=0;i<n;i++)
	    printf("%d ",a[i]);
	    printf("\n");
	}
	return 0;
}