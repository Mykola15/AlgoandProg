#include <stdio.h>
#include <math.h>

int main() {

    double function,element;
    int n = 0;

    for (double x=0.2;x<=1;x +=0.1)
    {
        double sum = 0, sum2 = 0;
        function = 0.5*log(x);

        for (; n <= 10; n++)
        {

            element = (1/(2.0*n+1))*pow(((x-1)/(x+1)),(2*n)+1);
            sum += element;

        }
        printf("N1 %d\n",n);
        n = 0;

        do
        {
            element = (1/(2.0 * n +1))*pow(((x-1)/(x+1)),(2*n)+1);
            sum2 += element;
            n++;
        }
        while (element>0.0000000001);

        printf("N2 %d\n",n);

        printf("Function: %e ",function);
        printf("X: %e ",x);
        printf("Sum: %e ",sum);
        printf("Sum_eps: %e \n",sum2);

    }
    return 0;
}