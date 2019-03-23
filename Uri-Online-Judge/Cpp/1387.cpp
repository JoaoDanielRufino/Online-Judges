#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int a,b;

    while(cin >> a >> b){
        if(!a && !b)
            break;
        cout << a+b << endl;
    }

    return 0;
}
