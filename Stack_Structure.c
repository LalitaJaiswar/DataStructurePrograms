#include<stdio.h>
#include<conio.h>
struct stack
{
	int a[10];
	int top=-1;
}
void main()
{
	struct stack st={12,22};
	clrscr();
	printf("%d\n%d",st.a[0],st.top);
	getch();
}