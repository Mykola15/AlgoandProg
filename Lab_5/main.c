#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
int sum_1=0,sum_2=0;
int i,j;
int rows,columns;
int k=0;
int s[columns];

srand(time(NULL));
rows=rand()%10;
columns=rand()%10;
int matrix[rows][columns];
    for ( int i = 0; i <rows ;i++) {
        for (int j = 0; j < columns; j++) {
            matrix[i][j] = rand() % 10;
        }
    }
    int l=columns;
    for (i = 0; i <rows ;i++)
    {
        printf("|");
        for (  j = 0; j <columns ; j++)
        {
            printf(" %d |", matrix[i][j]);
        }
        printf("\n");
    }

    for( j = 0; j<columns; j++)
    {
        s[j] = 0;
    }
    for ( i = 0; i <columns ; i++)
    {
        for ( j = 0; j < rows;j++)
        {
            s[i] += matrix[j][i];
        }
        printf(" %d ",s[i]);
    }

    if (columns<=2)
    {
        printf("\nError");
    }
    else
    {
        for (k = 1; k < columns; k++)
        {
            sum_2 = s[k];

            sum_1 += s[l - 1 - k];

            if (k + 1 == columns)
            {
                sum_1 = sum_1 - s[k - 1];
                printf("\nsum_1=%d\nsum_2= %d\nsum_1>sum_2", sum_1, sum_2);
            }
        }
    }


    if (sum_1 > sum_2)
    {
        printf("\nTrue");

    }
    else
    {
        printf("\nFalse");

    }
    return 0;
}


