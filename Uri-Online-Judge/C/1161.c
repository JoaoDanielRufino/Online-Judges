#include <stdio.h>

unsigned long long int fatorial(unsigned int n){
    if(!n)
        return 1;
    else
        return n*fatorial(n-1);
}

int main(){

    unsigned int n,m;
    unsigned long long int fat1,fat2;

    while(scanf("%u %u", &n,&m)!=EOF){
        fat1 = fatorial(n);
        fat2 = fatorial(m);
        printf("%llu\n", fat1+fat2);
    }

    return 0;
}
