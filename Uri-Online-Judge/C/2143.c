#include <stdio.h>

int main(){

    int x,n,i,soma;

    while(1){
        scanf("%d", &x);
        if(x==0)
            break;
        else{
            for(i=0; i<x; i++){
                scanf("%d", &n);
                if(n%2==0){
                    n -= 2;
                    soma = (n*2)+2;
                    printf("%d\n", soma);
                }
                else if(n%2!=0){
                    n -= 1;
                    soma = (n*2)+1;
                    printf("%d\n", soma);
                }
            }
        }
    }

    return 0;
}
