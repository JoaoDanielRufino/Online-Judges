#include <bits/stdc++.h>
#define INF 10101010

using namespace std;

int findMin(vector<int> vet, int m){
    int dp[m+1],tmp;

    dp[0] = 0;
    for(int i = 1; i <= m; i++)
        dp[i] = INF;

    for(int i = 1; i <= m; i++){
        for(int j = 0; j < vet.size(); j++){
            if(vet[j] <= i){
                tmp = dp[i-vet[j]];
                if(tmp+1 < dp[i] && tmp != INF)
                    dp[i] = tmp + 1;
            }
        }
    }
    return dp[m];
}

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int t,n,m,a;
    vector<int> vet;

    cin >> t;

    while(t--){
        cin >> n >> m;
        while(n--){
            cin >> a;
            vet.push_back(a);
        }
        cout << findMin(vet, m) << endl;
        vet.clear();
    }

    return 0;
}
