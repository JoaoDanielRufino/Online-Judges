#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,s,x,v[50];

    cin >> n;

    while(n--){
        cin >> x;
        for(int i=0; i<x; i++)
            cin >> v[i];
        s=0;
        for(int i=0; i<x; i++){
            for(int j=i+1; j<x; j++){
                if(v[i] > v[j])
                    s++;
            }
        }
        cout << "Optimal train swapping takes " << s << " swaps." << endl;
    }

    return 0;
}
