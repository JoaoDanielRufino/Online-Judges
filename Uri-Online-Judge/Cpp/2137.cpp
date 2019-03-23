#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n;
    string a;
    vector<string> vet;

    while(cin >> n){
        for(int i=0; i<n; i++){
            cin >> a;
            vet.push_back(a);
        }
        sort(vet.begin(), vet.end());
        for(int i=0; i<n; i++)
            cout << vet[i] << endl;
        vet.clear();
    }

    return 0;
}
