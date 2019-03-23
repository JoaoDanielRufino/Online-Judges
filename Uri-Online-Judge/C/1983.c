#include <stdio.h>

int main(){

    int n,i,pos,mat[100];
    float nota[100],comp=0.0;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d %f", &mat[i],&nota[i]);
        if(nota[i]>comp){
            comp = nota[i];
            pos = i;
        }
    }

    if(nota[pos]<8.0)
        printf("Minimum note not reached\n");
    else
        printf("%d\n", mat[pos]);

    return 0;
}
