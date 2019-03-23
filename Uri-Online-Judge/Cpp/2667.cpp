#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    unsigned int sum = 0;
    string str;

    cin >> str;

    for(int i = 0; i < str.size(); i++)
        sum += str[i] - '0';

    cout << sum%3 << endl;

    return 0;
}
