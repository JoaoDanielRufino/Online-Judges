#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,flag;
    set<char> myset;
    set<char>::iterator it;
    string dieta,cafe,almoco;

    cin >> n;
    cin.ignore();
    while(n--){
        flag=1;
        getline(cin,dieta);
        getline(cin,cafe);
        getline(cin,almoco);
        for(int i=0; i<dieta.size(); i++)
            myset.insert(dieta[i]);
        for(int i=0; i<cafe.size(); i++){
            it = myset.find(cafe[i]);
            if(it != myset.end())
                myset.erase(it);
            else{
                flag=0;
                cout << "CHEATER" << endl;
                break;
            }
        }
        if(flag){
            for(int i=0; i<almoco.size(); i++){
                it = myset.find(almoco[i]);
                if(it != myset.end())
                    myset.erase(it);
                else{
                    flag=0;
                    cout << "CHEATER" << endl;
                    break;
                }
            }
        }
        if(flag){
            for(it=myset.begin(); it!=myset.end(); it++)
                cout << *it;
            cout << endl;
        }
        myset.clear();
    }

    return 0;
}
