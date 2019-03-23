#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,q,count,j;
    string str,r;

    cin >> n;

    while(n--){
        cin >> str;
        cin >> q;
        while(q--){
            cin >> r;
            j = count = 0;
            for(int i = 0; i < str.size(); i++){
                if(r[j] == str[i]){
                    count++;
                    j++;
                }
            }
            if(count == r.size())
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }

    return 0;
}
