#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    unsigned long long int n,m,sum;
    char str[11];

    while(cin >> n >> m, n,m){
        sum = n + m;
        snprintf(str,11,"%llu",sum);
        for(int i = 0; i < strlen(str); i++){
            if(str[i] != '0')
                cout << str[i];
        }
        cout << endl;
    }

    return 0;
}
