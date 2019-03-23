#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int a,b,n;
    string str,aux;
    string::reverse_iterator rit;

    cin >> n;

    while(n--){
        cin >> a >> b;
        stringstream ss;
        for(int i = a; i <= b; i++){
            ss.clear();
            ss << i;
            ss >> aux;
            str += aux;
        }
        cout << str;
        for(rit = str.rbegin(); rit != str.rend(); rit++)
            cout << *rit;
        cout << endl;
        str.clear();
    }

    return 0;
}
