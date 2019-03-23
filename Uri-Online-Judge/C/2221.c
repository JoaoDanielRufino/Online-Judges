#include <stdio.h>

int main(){

    int n,a1,d1,l1,a2,d2,l2,b,i,vg1,vg2;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &b);
        scanf("%d %d %d", &a1,&d1,&l1);
        scanf("%d %d %d", &a2,&d2,&l2);
        if(l1%2==0 && l2%2==0){
            vg1 = (a1+d1)/2+b;
            vg2 = (a2+d2)/2+b;
        }
        else if(l1%2==0 && l2%2!=0){
            vg1 = (a1+d1)/2+b;
            vg2 = (a2+d2)/2;
        }
        else if(l1%2!=0 && l2%2==0){
            vg1 = (a1+d1)/2;
            vg2 = (a2+d2)/2+b;
        }
        else{
            vg1 = (a1+d1)/2;
            vg2 = (a2+d2)/2;
        }
        if(vg1==vg2)
            printf("Empate\n");
        else if(vg1>vg2)
            printf("Dabriel\n");
        else if(vg1<vg2)
            printf("Guarte\n");
    }

    return 0;
}
