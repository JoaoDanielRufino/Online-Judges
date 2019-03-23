#include <stdio.h>
#include <math.h>

int main(){

    int xf,yf,xi,yi,v,r1,r2;
    double disttotal;

    while(scanf("%d %d %d %d %d %d %d", &xf,&yf,&xi,&yi,&v,&r1,&r2)!=EOF){
        disttotal = sqrt(pow(xi-xf,2)+pow(yi-yf,2));
        disttotal = disttotal + (v*1.5);
        if(r1+r2>=disttotal)
            printf("Y\n");
        else
            printf("N\n");
    }

    return 0;
}
