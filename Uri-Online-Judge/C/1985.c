#include <stdio.h>

int main(){

    int x,y,n,i;
    double total=0,t[5];

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d %d", &x,&y);
        switch(x){
            case 1001: t[i] = y*1.50; break;
            case 1002: t[i] = y*2.50; break;
            case 1003: t[i] = y*3.50; break;
            case 1004: t[i] = y*4.50; break;
            case 1005: t[i] = y*5.50; break;
        }
        total += t[i];
    }

    printf("%.2lf\n", total);

    return 0;
}
