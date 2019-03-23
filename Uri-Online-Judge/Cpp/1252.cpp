#include <bits/stdc++.h>

using namespace std;

int m;

bool comp(const int a, const int b){
    int ma = a%m;
    int mb = b%m;
    if(ma != mb)
        return ma < mb;
    else{
        if(a%2 == 0 && b%2 != 0)
            return 0;
        else if(a%2 != 0 && b%2 == 0)
            return 1;
        else if(a%2 != 0 && b%2 != 0)
            return a > b;
        else if(a%2 == 0 && b%2 == 0)
            return a < b;
    }
}

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,a;
    vector<int> vet;

    while(cin >> n >> m, n,m){
        for(int i = 0; i < n; i++){
            cin >> a;
            vet.push_back(a);
        }
        sort(vet.begin(), vet.end(), comp);
        cout << n << " " << m << endl;
        for(int i = 0; i < n; i++)
            cout << vet[i] << endl;
        vet.clear();
    }

    cout << "0 0" << endl;

    return 0;
}
