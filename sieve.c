#include<stdio.h>
int sieve(int n){
int a[n+1],i,p;
for(i=0;i<=n;i++)
a[i]=1;
for(p=2;p*p<=n;p++){
	if(a[p]==1){
		for(i=p*p;i<=n;i+=p){
			a[i]=0;
		}
	}
}
for(i=2;i<=n;i++)
printf(" %d",i);
printf("\n");
for(i=2;i<=n;i++)
printf(" %d",a[i]);
return 0;
}
int main(){
	sieve(10);
	return 0;
}
