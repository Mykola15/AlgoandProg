#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,m;

    printf("Put the size of the array\n"); printf("Put n:");
    scanf("%d",&n);
    printf("Put m:");
    scanf("%d",&m);

    int k;
    printf("Put k:\n"); scanf("%d",&k); if((k>10) || (k<0)) {
    printf("Incorrect input of k!\n"); }

    int **mas;
    mas=(int**)malloc(n*sizeof(int*));

    for(int i=0; i<n; i++)
    {
        mas[i]=(int*)malloc(sizeof(int)*m);
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            mas[i][j]=rand()%10;
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            {
                printf("%d",mas[i][j]);
                printf("|");
            }

            printf("\n");
    }

    printf("\n");

    for(int i=0; i<n; i++)
    {
        int f=0;
        for(int j=0; j<m; j++)
        {
            if(mas[i][j]==k)
            {
                mas[i][j]=mas[i][j+1];
                f++;

            }

        }
        //printf("%d\n",f);
        mas[i]=(int*)realloc(mas[i],sizeof(int)*(m-1));

        for(int j=0; j<(m-1); j++)
        {
            printf("%d",mas[i][j]);
            printf("|");
        }
        printf("\n");
    }


    for(int i=0; i<n;i++)
    {
        free(mas[i]);
    }
    free(mas);
    return 0;
}