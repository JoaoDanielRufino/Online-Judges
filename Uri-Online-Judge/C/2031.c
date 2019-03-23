#include <stdio.h>
#include <string.h>

int main(){

    int n,i;
    char v1[10],v2[10];

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%s %s", v1,v2);

        if(strcmp(v1,"ataque")==0 && strcmp(v2,"pedra")==0)
            printf("Jogador 1 venceu\n");
        if(strcmp(v1,"pedra")==0 && strcmp(v2,"ataque")==0)
            printf("Jogador 2 venceu\n");
        if(strcmp(v1,"pedra")==0 && strcmp(v2,"papel")==0)
            printf("Jogador 1 venceu\n");
        if(strcmp(v1,"papel")==0 && strcmp(v2,"pedra")==0)
            printf("Jogador 2 venceu\n");
        if(strcmp(v1,"papel")==0 && strcmp(v2,"ataque")==0)
            printf("Jogador 2 venceu\n");
        if(strcmp(v1,"ataque")==0 && strcmp(v2,"papel")==0)
            printf("Jogador 1 venceu\n");
        if(strcmp(v1,"papel")==0 && strcmp(v2,"papel")==0)
            printf("Ambos venceram\n");
        if(strcmp(v1,"pedra")==0 && strcmp(v2,"pedra")==0)
            printf("Sem ganhador\n");
        if(strcmp(v1,"ataque")==0 && strcmp(v2,"ataque")==0)
            printf("Aniquilacao mutua\n");
    }

    return 0;
}
