#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,c1,c2;
    bool f1,f2;
    string juiz,t1,t2;

    cin >> n;
    cin.ignore();
    for(int k = 1; k <= n; k++){
        getline(cin,juiz);
        getline(cin,t1);
        getline(cin,t2);
        c1 = c2 = 0;
        f1 = f2 = false;
        for(int i = 0; i < juiz.size(); i++){
            if(t1[i] == juiz[i]){
                c1++;
                if(!f1 && !f2 && t1[i] != t2[i])
                    f1 = true;
            }
            if(t2[i] == juiz[i]){
                c2++;
                if(!f1 && !f2 && t1[i] != t2[i])
                    f2 = true;
            }
        }
        cout << "Instancia " << k << endl;
        if(c1 == c2){
            if((t1 == juiz && t2 == juiz) || (!f1 && !f2))
                cout << "empate" << endl << endl;
            else if(f1)
                cout << "time 1" << endl << endl;
            else
                cout << "time 2" << endl << endl;
        }
        else if(c1 > c2)
            cout << "time 1" << endl << endl;
        else
            cout << "time 2" << endl << endl;
    }


    return 0;
}
