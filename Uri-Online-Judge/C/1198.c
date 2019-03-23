#include <stdio.h>
#include <stdlib.h>

int main(){

    long long int n,m,dif;

    while(scanf("%lld %lld", &n,&m)!=EOF){
         dif = llabs(m-n);
        printf("%lld\n", dif);
    }

    return 0;
}
