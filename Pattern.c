/*	Name: ARSALAN ID: 1820182070	*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, rows;
    
	printf("Please input the number of lines of the figure n: ");
    scanf("%d", &rows);
    
	for(x=1; x<=rows; x++)
    {
        for(y=1; y<x; y++)
        {
            printf(" ");
        }
        for(y=1; y<=rows; y++)
        {
            if(x==1 || x==rows || y==1 || y==rows)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }
    return 0;
}
