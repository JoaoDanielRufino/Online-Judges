#include <stdio.h>

int main(){

    int n,i;
    double rep=2.0;

    scanf("%d", &n);

    if(n==0)
        printf("1.0000000000\n");

    else{
    for(i=1; i<n; i++)
        rep = 2.0+1.0/rep;

        printf("%.10lf\n", 1.0+1.0/rep);
    }

    return 0;
}
