#include <stdio.h>
#include <time.h>

int main()
{
    int i, j, rows;
    printf("Row Filler");
    printf("Enter number of rows: ");
    scanf("%d",&rows);

    for(i=1; i<=rows; ++i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

/** 
example company ip
*/
