#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,m,c,num,add,flag=0;
    vector<int> vet[100];


    cin >> n;

    while(n--){
        if(flag)
            cout << endl;
        cin >> m >> c;
        flag=1;
        for(int i=0; i<c; i++){
            cin >> num;
            add = num%m;
            vet[add].push_back(num);
        }
        for(int i=0; i<m; i++){
            cout << i << " -> ";
            for(int j=0; j<vet[i].size(); j++){
                cout << vet[i][j] << " -> ";
            }
            vet[i].clear();
            cout << "\\" << endl;
        }
    }

    return 0;
}
