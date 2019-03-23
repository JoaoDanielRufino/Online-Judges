#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,num,a,b,low,up;
    vector<int> vet;

    while(cin >> n){
        while(n--){
            cin >> a >> b;
            for(int i = a; i <= b; i++)
                vet.push_back(i);
        }
        cin >> num;
        
        sort(vet.begin(), vet.end());
        low = lower_bound(vet.begin(), vet.end(), num) - vet.begin();
        up = upper_bound(vet.begin(), vet.end(), num) - vet.begin();
        
        if(low >= up)
            cout << num << " not found" << endl;
        else
            cout << num << " found from " << low << " to " << up-1 << endl;
        vet.clear();
    }

    return 0;
}
