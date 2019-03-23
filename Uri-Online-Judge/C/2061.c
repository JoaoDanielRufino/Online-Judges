#include <stdio.h>
#include <string.h>

int main(){

    int n,x,i;
    char v[10];

    scanf("%d %d", &n,&x);

    for(i=0; i<x; i++){
        scanf("%s", v);

        if(strcmp(v,"fechou")==0)
            n++;
        else if(strcmp(v,"clicou")==0)
            n--;
    }

    printf("%d\n", n);

    return 0;
}
