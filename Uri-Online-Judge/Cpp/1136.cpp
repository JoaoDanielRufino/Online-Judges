#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,b,a;
    vector<int> vet;
    set<int> dif;

    while(cin >> n >> b){
        if(!n && !b)
            break;
        for(int i = 0; i < b; i++){
            cin >> a;
            vet.push_back(a);
        }
        for(int i = 0; i < b; i++){
            for(int j = i; j < b; j++){
                dif.insert(abs(vet[j] - vet[i]));
            }
        }
        if(dif.size() == (n + 1))
            cout << "Y" << endl;
        else
            cout << "N" << endl;
        vet.clear();
        dif.clear();
    }

    return 0;
}
