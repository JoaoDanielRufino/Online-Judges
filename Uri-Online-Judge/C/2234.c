#include <stdio.h>

int main(){

    int h,p;
    float media;

    scanf("%d %d", &h,&p);

    media = (float) h/p;

    printf("%.2f\n", media);

    return 0;
}
