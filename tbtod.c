#include<stdio.h>
int main(){
	long long int n,sum=0;
	int b,i=0;
	printf("Enter a binary number:");
	scanf("%ld",&n);
	while(n>0){
		b=n%10;
		sum=sum+pow(2,i)*b;
		n=n/10;
		i++;
	}
	printf("\nDecimal: %ld",sum);
}
