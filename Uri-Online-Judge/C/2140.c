#include <stdio.h>

int main(){

    int n,m,dif;

    while(1){
        scanf("%d %d", &n,&m);
        if(n==0 && m==0)
            break;
        else{
            dif = m-n;
            if(dif==7 || dif==12 || dif==22 || dif==52 || dif==102 || dif==15 || dif==25 || dif==55 || dif==105 || dif==30 || dif==60 || dif==110 || dif==70 || dif==120 || dif==150)
                printf("possible\n");
            else
                printf("impossible\n");
        }
    }

    return 0;
}
