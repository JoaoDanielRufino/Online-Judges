#include <stdio.h>

int main(){

    int n,x,y,i,pos=0,count=0;

    scanf("%d", &x);

    scanf("%d", &n); y=n;
    for(i=1; i<x; i++){
        scanf("%d", &n);
        if(y>n && count==0){
            pos = i+1;
            count++;
        }
        y = n;
    }

    printf("%d\n", pos);

    return 0;
}
