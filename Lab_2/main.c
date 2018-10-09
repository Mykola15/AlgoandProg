#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fact(double n)
{
    int f = 1;

    if (n<2)
        return 1;
    
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main() {
    double a, n = 0, s = 0;
   fact(n);
    do
    {
        a = pow(3, n) * fact(n) / fact(3 * n) ;
        s+=a;
        n++;

    }
    while (a>0.00001);

    printf("s=%lf\n", s);
    return 0;
}


