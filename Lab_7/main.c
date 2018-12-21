#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <math.h>
void  swap_(int num,...) {
    long rem, base = 1, ternary = 0;
    int M[num];
    va_list list;
    va_start(list, num);
    for (int j = 0; j < num; ++j) {
        M[j] = va_arg(list, int);
    }
    for (int i = 0; i < num; ++i) {


        while (M[i] > 0) {
            rem = M[i] % 3;
            ternary = ternary + rem * base;
            M[i] /= 3;
            base = base * 10;
        }
        printf("Трійкове число : %ld\n\n", ternary);
        ternary=0;
        base=1;
    }
}
int main(void) {
    swap_(3,3,4,7);
}