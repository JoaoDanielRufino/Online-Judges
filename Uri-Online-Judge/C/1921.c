#include <stdio.h>

int main(){

    long long int n,i,dif,total;

    scanf("%lld", &n);

    total = 0; dif = n-4;
    for(i=0; i<(n-2); i++){
        if(i>=2){
            total += dif;
            dif--;
        }
        else
            total += n-3;
    }

    printf("%lld\n", total);

    return 0;
}
