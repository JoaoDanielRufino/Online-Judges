#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int n,i,j;

    scanf("%d", &n);

    while(n--){
        char v[101],aux;
        getchar();
        scanf("%[^\n]", v);
        i=0;
        j=strlen(v)/2-1;
        while(i<j){
            aux = v[i];
            v[i] = v[j];
            v[j] = aux;
            i++;
            j--;
        }
        i=strlen(v)/2;
        j=strlen(v)-1;
        while(i<j){
            aux = v[i];
            v[i] = v[j];
            v[j] = aux;
            i++;
            j--;
        }
        printf("%s\n", v);
    }

    return 0;
}
