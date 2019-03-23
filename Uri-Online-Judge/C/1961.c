#include <stdio.h>
#include <stdlib.h>

int main(){

    int p,n,i,l,v[100];

    scanf("%d %d", &p,&n);

    for(i=0; i<n; i++){
        scanf("%d", &v[i]);
    }

    for(i=0; i<n-1; i++){
        if(abs(v[i]-v[i+1]) > p){
            l=0;
            break;
        }
        else
            l=1;
    }

    if(l==1)
        printf("YOU WIN\n");
    else
        printf("GAME OVER\n");

    return 0;
}
