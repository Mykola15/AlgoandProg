#include <stdio.h>
#include <math.h>
int main()
{
    double a=100,b=0.001,g;
    g=(pow((a-b),4)-(pow(a,4)-4*pow(a,3)*b)/(6*pow(a*b,2)-4*a*pow(b,3)+pow(b,4))); 
    printf("result=%lf\n",g); 
}