#include <stdio.h>

int main(){

    int n,i;
    double rep=6.0;

    scanf("%d", &n);

    if(n==0)
        printf("3.0000000000\n");

    else{
    for(i=1; i<n; i++)
        rep = 6.0+1.0/rep;

        printf("%.10lf\n", 3.0+1.0/rep);
    }

    return 0;
}
