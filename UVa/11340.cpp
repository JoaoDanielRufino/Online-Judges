#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,k,m,a;
    char c;
    string text;
    map<char,int> mp;

    cin >> k;

    while(k--){
        cin >> n;
        while(n--){
            cin >> c >> a;
            mp[c] = a;
        }
        cin >> m;
        cin.ignore();
        double ans = 0.0;
        while(m--){
            getline(cin,text);
            for(int i = 0; i < text.size(); i++)
                ans += mp[text[i]];
        }
        cout << setprecision(2) << fixed << ans/100.0 << "$" << endl;
        mp.clear();
    }

    return 0;
}
