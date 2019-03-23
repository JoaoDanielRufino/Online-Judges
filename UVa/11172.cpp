#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    long long int n,a,b;

    cin >> n;

    while(n--){
        cin >> a >> b;
        if(a > b)
            cout << ">" << endl;
        else if(a < b)
            cout << "<" << endl;
        else
            cout << "=" << endl;
    }

    return 0;
}
