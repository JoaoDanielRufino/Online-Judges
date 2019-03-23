#include <bits/stdc++.h>

using namespace std;

long long int dp[10005][5];

long long int coin_change(vector<int> vet, int value, int index){
    if(!value)
        return 1LL;

    if(value < 0LL || index == vet.size())
        return 0LL;

    if(dp[value][index] != -1LL)
        return dp[value][index];

    return dp[value][index] = coin_change(vet, value-vet[index], index) + coin_change(vet, value, index+1);
}

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int val;
    vector<int> vet;

    vet.push_back(1);
    vet.push_back(5);
    vet.push_back(10);
    vet.push_back(25);
    vet.push_back(50);
    memset(dp, -1LL, sizeof dp);

    while(cin >> val){
        cout << coin_change(vet, val, 0) << endl;
    }

    return 0;
}
