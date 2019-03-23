#include <stdio.h>

int main(){

    int n,h,m,o,i;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d %d %d", &h,&m,&o);
        if(o==1){
            if(h<10 && m<10)
                printf("0%d:0%d - A porta abriu!\n", h,m);
            else if(h<10)
                printf("0%d:%d - A porta abriu!\n", h,m);
            else if(m<10)
                printf("%d:0%d - A porta abriu!\n", h,m);
            else
                printf("%d:%d - A porta abriu!\n", h,m);
        }
        else if(o==0){
            if(h<10 && m<10)
                printf("0%d:0%d - A porta fechou!\n", h,m);
            else if(h<10)
                printf("0%d:%d - A porta fechou!\n", h,m);
            else if(m<10)
                printf("%d:0%d - A porta fechou!\n", h,m);
            else
                printf("%d:%d - A porta fechou!\n", h,m);
        }
    }

    return 0;
}
