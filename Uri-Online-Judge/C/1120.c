#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char c,i,count,dif,v[10000];

    while(1){
        scanf("%c %s", &c,v);
        getchar();
        if(c=='0' && v[0]=='0')
            break;
        else{
            count=0;
            dif=0;
            for(i=0; i<strlen(v); i++){
                if(v[i]!=c && v[i]!='0')
                    dif = 1;
                if(v[i]==c || dif==0)
                    v[i] = '*';
                if(v[i]!='*'){
                    printf("%c", v[i]);
                    count++;
                }
            }
            if(count==0)
                printf("0");
            printf("\n");
        }
    }

    return 0;
}
