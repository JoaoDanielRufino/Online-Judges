#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,total,rest,pos;
    char str[200];

    while(1){
        scanf("%s", str);
        if(str[1] != 'x'){
            n = atoi(str);
            if(n < 0)
                break;
            printf("0x%X\n", n);
        }
        else{
            pos=0;
            total=0;
            for(int i=strlen(str); i>2; i--){
                if(str[i-1] >= '0' && str[i-1] <= '9')
                    rest = str[i-1] - 48;
                else if(str[i-1] >= 'a' && str[i-1] <='f')
                    rest = str[i-1] - 87;
                else if(str[i-1] >= 'A' && str[i-1] <='F')
                    rest = str[i-1] - 55;
                total += rest * (pow(16,pos));
                pos++;
            }
            printf("%d\n", total);
        }
    }

    return 0;
}
