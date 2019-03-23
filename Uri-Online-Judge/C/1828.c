#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int n,i;
    char v1[10],v2[10];

    scanf("%d ", &n);

    for(i=0; i<n; i++){
        scanf("%s", v1);
        scanf("%s", v2);

        if(strcmp(v1,v2)==0)
            printf("Caso #%d: De novo!\n", i+1);
        else if(strcmp(v1,"tesoura")==0 && strcmp(v2,"papel")==0)
            printf("Caso #%d: Bazinga!\n", i+1);
        else if(strcmp(v1,"papel")==0 && strcmp(v2,"tesoura")==0)
            printf("Caso #%d: Raj trapaceou!\n", i+1);
        else if(strcmp(v1,"papel")==0 && strcmp(v2,"pedra")==0)
            printf("Caso #%d: Bazinga!\n", i+1);
        else if(strcmp(v1,"pedra")==0 && strcmp(v2,"papel")==0)
            printf("Caso #%d: Raj trapaceou!\n", i+1);
        else if(strcmp(v1,"pedra")==0 && strcmp(v2,"lagarto")==0)
            printf("Caso #%d: Bazinga!\n", i+1);
        else if(strcmp(v1,"lagarto")==0 && strcmp(v2,"pedra")==0)
            printf("Caso #%d: Raj trapaceou!\n", i+1);
        else if(strcmp(v1,"lagarto")==0 && strcmp(v2,"Spock")==0)
            printf("Caso #%d: Bazinga!\n", i+1);
        else if(strcmp(v1,"Spock")==0 && strcmp(v2,"lagarto")==0)
            printf("Caso #%d: Raj trapaceou!\n", i+1);
        else if(strcmp(v1,"Spock")==0 && strcmp(v2,"tesoura")==0)
            printf("Caso #%d: Bazinga!\n", i+1);
        else if(strcmp(v1,"tesoura")==0 && strcmp(v2,"Spock")==0)
            printf("Caso #%d: Raj trapaceou!\n", i+1);
        else if(strcmp(v1,"tesoura")==0 && strcmp(v2,"lagarto")==0)
            printf("Caso #%d: Bazinga!\n", i+1);
        else if(strcmp(v1,"lagarto")==0 && strcmp(v2,"tesoura")==0)
            printf("Caso #%d: Raj trapaceou!\n", i+1);
        else if(strcmp(v1,"lagarto")==0 && strcmp(v2,"papel")==0)
            printf("Caso #%d: Bazinga!\n", i+1);
        else if(strcmp(v1,"papel")==0 && strcmp(v2,"lagarto")==0)
            printf("Caso #%d: Raj trapaceou!\n", i+1);
        else if(strcmp(v1,"papel")==0 && strcmp(v2,"Spock")==0)
            printf("Caso #%d: Bazinga!\n", i+1);
        else if(strcmp(v1,"Spock")==0 && strcmp(v2,"papel")==0)
            printf("Caso #%d: Raj trapaceou!\n", i+1);
        else if(strcmp(v1,"Spock")==0 && strcmp(v2,"pedra")==0)
            printf("Caso #%d: Bazinga!\n", i+1);
        else if(strcmp(v1,"pedra")==0 && strcmp(v2,"Spock")==0)
            printf("Caso #%d: Raj trapaceou!\n", i+1);
        else if(strcmp(v1,"pedra")==0 && strcmp(v2,"tesoura")==0)
            printf("Caso #%d: Bazinga!\n", i+1);
        else if(strcmp(v1,"tesoura")==0 && strcmp(v2,"pedra")==0)
            printf("Caso #%d: Raj trapaceou!\n", i+1);
        }

    return 0;
}
