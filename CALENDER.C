#include<stdio.h>
#include<conio.h>
void main()
{
int i;
clrscr();
printf("Calender:\nMon\tTue\tWed\tThu\tFri\tSat\tSun\n\t\t");
for(i=1;i<=31;i++)
{
printf("%d   \t",i);
if(i==5||i==12||i==19||i==26)
{
printf("\n");
}
}
getch();
}