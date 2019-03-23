#include <stdio.h>

int main(){

    int v[4],i,j,aux;

    for(i=0; i<4; i++)
        scanf("%d", &v[i]);

    for(i=0; i<4; i++){
        for(j=i+1; j<4; j++){
            if(v[j]<v[i]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    if(v[2]<v[0]+v[1] || v[3]<v[1]+v[2])
        printf("S\n");
    else
        printf("N\n");

    return 0;
}
