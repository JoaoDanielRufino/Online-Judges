#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int i;
    char v[60];

    while(scanf("%[^\n]", v)!=EOF){
        getchar();
        for(i=0; i<strlen(v); i++){
            if(v[i]>='a' && v[i]<='z'){
                if(v[i]+13 > 'z')
                    v[i] -= 13;
                else
                    v[i] += 13;
            }
            else if((v[i]>='A' && v[i]<='Z')){
                if(v[i]+13 > 'Z')
                    v[i] -= 13;
                else
                    v[i] += 13;
            }
        }
        printf("%s\n", v);
    }

    return 0;
}
