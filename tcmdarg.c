#include<stdio.h>
#include<stdlib.h>
int main(int a,char * arr[]){
	int res;
	if(a==1)
		printf("No command line argument found!");
	else{
		res=atoi(arr[1])+atoi(arr[2]);
		printf("%d",res);
		}
}
/*
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char * argv[]) {
   	int i, sum = 0;
 
   	if (argc != 3) {
      		printf("You have forgot to specify two numbers.");
      		exit(1);
   	}
 	printf("The sum is : ");
	sum= atoi(argv[1])+atoi(argv[2]);
 	printf("%d", sum);
	return 0;
 
}
*/
