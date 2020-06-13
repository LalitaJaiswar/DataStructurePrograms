#include<stdio.h>
#include<conio.h>
#include<string.h>
void counting(int[],int);
int main() {
   int a[7],key,j,i;
   for(i=0;i<7;i++)
   scanf("%d",&a[i]);
   printf("\n");
   counting(a,7);
   printf("\n");
   for(i=0;i<7;i++)
   printf("%d ",a[i]);
}
void counting(int a[],int n){
	int out[7],count[100]={0}, i; 
    //memset(count, 0, sizeof(count)); 
    //counting occurance
    for(i=0;i<7;i++)
    ++count[a[i]];
    //adding previous value to current
    for(i=1;i<100;i++)
    count[i]=count[i]+count[i-1];
    //placing element at proper place in sorted order
    for(i=0;i<7;i++){	
    out[count[a[i]]-1]=a[i];
    count[a[i]]--;}
    //copying element to main array
    for(i=0;i<7;i++)
    a[i]=out[i];
}
