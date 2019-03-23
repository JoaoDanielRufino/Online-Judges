#include<stdio.h>

int main(){

    int n,i,j,im=0,p=0,par[5],impar[5];

    for(i=0; i<15; i++){
        scanf("%d", &n);

        if(n%2==0){
            par[p]=n;
            p++;
            if(p==5){
                for(j=0; j<5; j++)
                    printf("par[%d] = %d\n", j,par[j]);
                p=0;
            }
        }
        if(n%2!=0){
            impar[im]=n;
            im++;
            if(im==5){
                for(j=0; j<5; j++)
                    printf("impar[%d] = %d\n", j,impar[j]);
                im=0;
            }
        }
    }

    for(j=0; j<im; j++)
        printf("impar[%d] = %d\n", j,impar[j]);
    for(j=0; j<p; j++)
        printf("par[%d] = %d\n", j,par[j]);

    return 0;
}
