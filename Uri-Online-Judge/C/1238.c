#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int n,i,j,t1,t2,tam;

    scanf("%d ", &n);

    while(n--){
        char v1[51]={'\0'},v2[51]={'\0'};
        scanf("%s", v1);
        getchar();
        scanf("%s", v2);
        getchar();

        t1 = strlen(v1);
        t2 = strlen(v2);
        if(t1>=t2)
            tam = t1;
        else
            tam = t2;
        for(i=0; i<tam; i++){
            if(v1[i]!='\0')
                printf("%c", v1[i]);
            if(v2[i]!='\0')
                printf("%c", v2[i]);
        }
        printf("\n");
    }

    return 0;
}
