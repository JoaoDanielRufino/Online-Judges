#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,m,j,a;

    while(cin >> n, n){
        m = j = 0;
        for(int i = 0; i < n; i++){
            cin >> a;
            if(!a)
                m++;
            else
                j++;
        }
        cout << "Mary won " << m << " times and John won " << j << " times" << endl;
    }

    return 0;
}
