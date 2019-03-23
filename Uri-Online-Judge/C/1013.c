#include<stdio.h>
#include<math.h>

int main(){

    int x,y,z,maior1,maior2;
    scanf("%d %d %d", &x,&y,&z);

    maior1=(x+y+abs(x-y))/2;
    maior2=(maior1+z+abs(maior1-z))/2;

    printf("%d eh o maior\n", maior2);

    return 0;

}
