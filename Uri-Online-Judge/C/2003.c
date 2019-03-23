#include <stdio.h>

int main(){

    int h,m,dif,total;

    while(scanf("%d:%d", &h,&m)!=EOF){
        h++;
        h *= 60;
        total = h + m;
        dif = total - (8*60);
        if(dif>=0)
            printf("Atraso maximo: %d\n", dif);
        else
            printf("Atraso maximo: 0\n");
    }

    return 0;
}
