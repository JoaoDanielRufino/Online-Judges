#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,k,a;

    cin >> n;

    while(n--){
        cin >> k;
        while(k--){
            cin >> a;
            if(a == 1)
                cout << "Rolien" << endl;
            else if(a == 2)
                cout << "Naej" << endl;
            else if(a == 3)
                cout << "Elehcim" << endl;
            else
                cout << "Odranoel" << endl;
        }
    }

    return 0;
}
