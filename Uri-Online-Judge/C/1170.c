#include <stdio.h>

int main(){

    int x,count;
    float n;

    scanf("%d", &x);

    while(x--){
        scanf("%f", &n);
        count=0;
        while (n>1.0){
            n = n/2;
            ++count;
        }
        printf("%d dias\n", count);
    }

    return 0;
}
