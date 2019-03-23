#include <stdio.h>

int main(){

    int s,t,f,h;

    scanf("%d %d %d", &s,&t,&f);

    h = s+t+f;

    if(h>=24)
        printf("%d\n", h-24);
    else if(h<0)
        printf("%d\n", h+24);
    else
        printf("%d\n", h);

    return 0;
}
