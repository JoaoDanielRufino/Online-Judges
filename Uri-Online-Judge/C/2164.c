#include <stdio.h>
#include <math.h>

int main(){

    double n,fib;

    scanf("%lf", &n);

    fib = (pow(((1+sqrt(5))/2),n) - pow(((1-sqrt(5))/2),n))/sqrt(5);

    printf("%.1lf\n", fib);

    return 0;
}
