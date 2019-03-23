#include <stdio.h>
#include <string.h>

int main(){

    int n,i,sum,num;
    char v[10000],led[11]={6,2,5,5,4,5,6,3,7,6};

    scanf("%d", &n);

    while(n--){
        scanf("%s", &v);
        sum=0;
        for(i=0; i<strlen(v); i++){
            num = v[i]-48;
            sum += led[num];
        }
        printf("%d leds\n", sum);
    }

    return 0;
}
