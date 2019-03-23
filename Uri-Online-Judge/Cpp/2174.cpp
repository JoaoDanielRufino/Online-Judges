#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n;
    string str;
    set<string> myset;

    cin >> n;

    while(n--){
        cin >> str;
        myset.insert(str);
    }

    cout << "Falta(m) " << 151-myset.size() << " pomekon(s)." << endl;

    return 0;
}
