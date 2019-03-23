#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,num,D[65],E[65];
    char p;

    while(cin >> n){
        int count = 0;
        for(int i = 30; i <= 60; i++){
            D[i] = 0;
            E[i] = 0;
        }
        for(int i = 0; i < n; i++){
            cin >> num >> p;
            if(p == 'D'){
                if(E[num] != 0){
                    E[num]--;
                    count++;
                }
                else
                    D[num]++;
            }
            else if(p == 'E'){
                if(D[num] != 0){
                    D[num]--;
                    count++;
                }
                else
                    E[num]++;
            }
        }
        cout << count << endl;
    }

    return 0;
}
