#include<stdio.h>
int main(){
    int n=3000;
 while(n<3030){
     if(((n%4==0 ) && (n%100!=0)) || (n%400==0))
     printf("%d\n",n);
     n++;
 }   
 return 0;
}