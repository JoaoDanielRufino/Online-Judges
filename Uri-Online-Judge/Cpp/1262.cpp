#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,count,ciclos;
    string str;

    while(cin >> str){
        cin >> n;
        count = ciclos = 0;
        for(int i = 0; i < str.size(); i++){
            if(str[i] == 'W'){
                ciclos++;
                count = 0;
            }
            else if(str[i] == 'R' && (str[i+1] == 'R' || str[i+1] == '\0'))
                count++;
            else if(str[i] == 'R' && str[i+1] == 'W'){
                ciclos++;
                count = 0;
            }
            if(count == n){
                count = 0;
                ciclos++;
            }
        }
        if(!count)
            cout << ciclos << endl;
        else
            cout << ciclos+1 << endl;
    }

    return 0;
}
