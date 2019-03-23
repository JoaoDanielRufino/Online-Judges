#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,x;
    vector<int> vet;

    cin >> n;
    while(n--){
        cin >> x;
        vet.push_back(x);
    }

    sort(vet.begin(),vet.end());
    for(int i=0; i<vet.size(); i++){
        if(vet[i]%2==0)
            cout << vet[i] << endl;
    }
    for(int i=vet.size()-1; i>=0; i--){
        if(vet[i]%2!=0)
            cout << vet[i] << endl;
    }

    return 0;
}
