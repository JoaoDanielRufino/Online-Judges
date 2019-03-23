#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    unsigned long long int n,m,num;

    while(cin >> n, n){
        num = 0ULL;
        for(int i = 0; i < n; i++){
            cin >> m;
            num = num ^ m;
        }
        cout << num << endl;
    }

    return 0;
}
