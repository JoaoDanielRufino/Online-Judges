#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n;
    string str;

    cin >> n;

    while(n--){
        cin >> str;
        sort(str.begin(), str.end());
        cout << str << endl;
        while(next_permutation(str.begin(), str.end()))
            cout << str << endl;
        cout << endl;
    }

    return 0;
}
