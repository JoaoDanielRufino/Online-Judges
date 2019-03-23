#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int n,i,max,l=0;
    char v[51][51];

    while(1){
        scanf("%d", &n);
        if(n==0)
            break;
        else{
            if(l)
                printf("\n");
            scanf("%s", v[0]);
            getchar();
            max = strlen(v[0]);
            for(i=1; i<n; i++){
                scanf("%s", v[i]);
                getchar();
                if(strlen(v[i])>max)
                    max = strlen(v[i]);
            }
            for(i=0; i<n; i++)
                printf("%*s\n", max,v[i]);
        }
        l = 1;
    }

    return 0;
}
