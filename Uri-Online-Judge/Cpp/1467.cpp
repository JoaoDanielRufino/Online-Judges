#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int a,b,c;

    while(cin >> a >> b >> c){
        if(a == b && b == c)
            cout << "*" << endl;
        else if(a != b && a != c && b == c)
            cout << "A" << endl;
        else if(b != a && b != c && a == c)
            cout << "B" << endl;
        else if(c != b && c != a && a == b)
            cout << "C" << endl;
    }

    return 0;
}
