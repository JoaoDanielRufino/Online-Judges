#include <stdio.h>
#include <string.h>

int main(){

    int lengtha,lengthb,dif,i,l,n,j;
    char a[1001],b[1001];

    scanf("%d", &n);

    while(n--){
        scanf("%s %s", &a,&b);

        lengthb = strlen(b);
        lengtha = strlen(a);
        dif = lengtha - lengthb;
        l=1;
        for(i=dif, j=0; i<lengtha; i++, j++){
            if(a[i]!=b[j])
                l=0;
        }

        if(l==1)
            printf("encaixa\n");
        else
            printf("nao encaixa\n");
    }

    return 0;
}
