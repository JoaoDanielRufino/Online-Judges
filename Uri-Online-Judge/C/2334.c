#include <stdio.h>

int main(){

    long long unsigned int p;

    while(1){
        scanf("%llu", &p);
        if(p==-1)
            break;
        else{
            if(p==0)
                printf("%llu\n", p);
            else
                printf("%llu\n", p-1);
        }
    }

    return 0;
}
