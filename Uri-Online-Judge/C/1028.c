#include <stdio.h>

int mdc(int max, int min){
    if(!min)
        return max;
    else
        return mdc(min,max%min);
}

int main(){

    int x,n,m,min,max,tam;

    scanf("%d", &x);

    while(x--){
        scanf("%d %d", &n,&m);
        max = n;
        min = m;
        tam = mdc(max,min);
        printf("%d\n", tam);
    }

    return 0;
}
