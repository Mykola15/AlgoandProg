#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,r1,r2,r3; 
    printf("Put n\n"); 
    scanf("%d/n",&n);
    printf("Put m\n");
    scanf("%d/n",&m); 
    r1=n++*m; 
    r2=n++<m; 
    r3=n-->m; 
    printf("result 1 = %d\n",r1);
    printf("result 2 = %d\n",r2);
    printf("result 3 = %d\n",r3);
    return 0;
}
