#include<stdio.h>
#include<conio.h>
void main()
{
char uid[10]="amethi",upass[10]="227816";
char eid[10],epass[10],ch;
int r1,r2,i;
clrscr();
printf("Enter your id:");
gets(eid);
printf("Enter your password:");
for(i=0;i<10;i++)
{
ch=getch();
if(ch==13)
break;
else
printf("*");
epass[i]=ch;
}
epass[i]='\0';
r1=strcmp(uid,eid);
r2=strcmp(upass,epass);
if(r1==0 && r2==0)
printf("\nWelcome");
else
printf("\nInvalid user id or password");
getch();
}
