#include <stdio.h>
#include <math.h>

int main(){

    int n;
    double min,max;

    scanf("%d", &n);

    min = n/log(n);
    max = (1.25506)*min;

    printf("%.1lf %.1lf\n", min,max);

    return 0;
}
