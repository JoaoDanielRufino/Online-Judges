#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,m,p,x;
    float value,total;
    char str[51];
    map<string,float> mymap;

    scanf("%d", &n);

    while(n--){
        scanf("%d", &m);
        while(m--){
            getchar();
            scanf("%s %f", str,&value);
            mymap[str] = value;
        }
        total=0.0;
        scanf("%d", &p);
        while(p--){
            getchar();
            scanf("%s %d", str,&x);
            total += mymap[str]*x;
        }
        printf("R$ %.2f\n", total);
        mymap.clear();
    }

    return 0;
}
