#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    printf("Введіть розмір масиву\n");
    scanf("%d",&n);
    int a[100],j,i,min,b[100],s_a=0;

    for(i = 0; i < n; i++)
    {
        a[i] = rand() % 100 ;
        printf("%d", a[i]);
        printf("  ");
    }
    printf("\n");
    min=a[0];
    for(i=0;i<n; i++)
    {
        if (a[i]<min)
        {
            min=a[i];
        }
    }
    j=0;
    for(i=0;i<n;i++)
    {
        if (a[i]==min)
        {
            j++;

        }
        else
        {
            b[i-j]=a[i];
            s_a+=b[i-j];
        }

    }
    n-=j;
    s_a=s_a/n;

    for(i=0;i<n;i++)
    {
        printf("%d",b[i]);
        printf("  ");
    }
    printf("\n");
    printf("%d\n",s_a);
    n+=3;
    for (i=0;i<n;i++)
    {
        if(i<3)
        {
            a[i]=s_a;
        }
        else
            {
            a[i]=b[i-3];
            }
        printf("%d",a[i]);
        printf("  ");

    }

    return 0;
}