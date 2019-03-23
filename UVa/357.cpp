#include <bits/stdc++.h>

using namespace std;

long long int dp[30005][50];

long long int solve(vector<int> vet, int val, int index){
    if(!val)
        return 1LL;

    if(val < 0LL || index == vet.size())
        return 0LL;

    if(dp[val][index] != -1LL)
        return dp[val][index];

    return dp[val][index] = solve(vet, val-vet[index], index) + solve(vet, val, index+1);
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
        long long int ans = solve(vet, val, 0);
        if(ans == 1LL)
            cout << "There is only 1 way to produce " << val << " cents change." << endl;
        else
            cout << "There are " << ans << " ways to produce " << val << " cents change." << endl;
    }

    return 0;
}
