#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,d,count;
    bool flag;

    while(cin >> n >> d){
        if(!n && !d)
            break;

        int vet[505][105];
        for(int i = 0; i < d; i++){
            for(int j = 0; j < n; j++){
                cin >> vet[i][j];
            }
        }

        flag = false;
        for(int j = 0; j < n; j++){
            count = 0;
            for(int i = 0; i < d; i++){
                if(vet[i][j] == 1)
                    count++;
                else
                    break;
            }
            if(count == d){
                flag = true;
                break;
            }
        }
        if(flag)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    return 0;
}
