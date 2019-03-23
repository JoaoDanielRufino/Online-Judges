#include <stdio.h>
#include <string.h>

int main(){

    int i,j,pos,count,qtd,k=0,l;
    char v1[10000],v2[10000];

    while(scanf("%s %s", v1,v2)!=EOF){
        qtd=0; k++;
        for(i=0; i<strlen(v2); i++){
            if(v1[0]==v2[i]){
                count=0;
                j=i;
                l=0;
                while(v1[l]==v2[j] && v2[j]!='\0'){
                    count++;
                    l++;
                    j++;
                }
                if(count==strlen(v1)){
                    qtd++;
                    pos = i;
                }
            }
        }
        if(qtd!=0){
            printf("Caso #%d:\n", k);
            printf("Qtd.Subsequencias: %d\n", qtd);
            printf("Pos: %d\n\n", pos+1);
        }
        else{
            printf("Caso #%d:\n", k);
            printf("Nao existe subsequencia\n\n");
        }
    }

    return 0;
}
