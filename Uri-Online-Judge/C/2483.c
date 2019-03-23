#include <stdio.h>
#include <string.h>

int main(){

    int n,i;
    char v[100000];

    scanf("%d", &n);

    strcpy(v,"Feliz nata");

    i=9;
    while(n--){
        v[i] = 'a';
        i++;
    }

    printf("%sl!\n", v);

    return 0;
}
