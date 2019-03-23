#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,b,a,debe,d,c;
    bool flag;
    vector<int> res;

    while(cin >> b >> n){
        flag = true;
        if(!b && !n)
            break;
        for(int i = 0; i < b; i++){
            cin >> a;
            res.push_back(a);
        }
        for(int i = 0; i < n; i++){
            cin >> d >> c >> debe;
            res[d-1] -= debe;
            res[c-1] += debe;
        }
        for(int i = 0; i < b; i++){
            if(res[i] < 0){
                flag = false;
                break;
            }
        }
        if(flag)
            cout << "S" << endl;
        else
            cout << "N" << endl;
        res.clear();
    }

    return 0;
}
