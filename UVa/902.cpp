#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,max;
    string str,pass,aux;
    map<string,int> mp;

    while(cin >> n >> str){
        max = -1;
        for(int i = 0; i <= str.size()-n; i++){
            aux = str.substr(i, n);
            mp[aux]++;
            if(mp[aux] > max){
                max = mp[aux];
                pass = aux;
            }
        }
        cout << pass << endl;
        mp.clear();
    }

    return 0;
}
