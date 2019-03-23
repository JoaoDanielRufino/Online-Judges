#include <stdio.h>

int main(){

    int x,n,i,y,count=1,z;

    scanf("%d", &x);

    scanf("%d", &n); y=n;
    scanf("%d", &n); z=n;

    if(x==2 && y==z)
        count=0;

    else{
        for(i=0; i<x-2; i++){
            scanf("%d", &n);
            if(n>=z && z>=y){
                count=0;
                break;
            }
            else if(n<=z && z<=y){
                count=0;
                break;
            }
            y=z;
            z=n;
        }
    }

    if(count==1)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
