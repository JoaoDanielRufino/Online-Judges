#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int n,i,l,j;

    scanf("%d ", &n);

    while(n--){
        char v[51],s[51]={'\0'};
        gets(v);
        j=0; l=1;
        for(i=0; i<strlen(v); i++){
            if(v[i]==' '){
                i++;
                l = 1;
            }
            if((v[i]>='a' && v[i]<='z') && l){
                s[j] = v[i];
                j++;
                l=0;
            }
        }
        printf("%s\n", s);
    }

    return 0;
}
