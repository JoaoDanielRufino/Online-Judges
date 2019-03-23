#include <stdio.h>

int main(){

    double v,d,r,altura,area;

    while(scanf("%lf %lf", &v,&d)!=EOF){
        r = d/2.0;
        area = 3.14*r*r;
        altura = v/(r*r*3.14);
        printf("ALTURA = %.2lf\n", altura);
        printf("AREA = %.2lf\n", area);
    }

    return 0;
}
