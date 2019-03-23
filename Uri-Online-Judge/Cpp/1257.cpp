#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,l;

    scanf("%d", &n);
    while(n--){
        int total=0;
        scanf("%d", &l);
        getchar();
        for(int elem=0; elem<l; elem++){
            char str[55];
            scanf("%s", str);
            for(int i=0; i<strlen(str); i++)
                total += str[i]-65 + elem + i;
        }
        printf("%d\n", total);
    }

    return 0;
}
