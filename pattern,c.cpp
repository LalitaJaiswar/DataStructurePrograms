#include <stdio.h>
int main()
{
    int i, space, rows, k=0;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    printf("\nPrinting....\n");
    for(i=0; i<rows; i++,k=0)
    {
        for(space=0; space<rows-i; space++)
        {
            printf("  ");
        }
        while(k<=2*i)
        {
            printf("* ");
            ++k;
        }
        printf("\n");
    }
    
    return 0;
}
