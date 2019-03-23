#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n;
    string str;
    set<char> myset;

    cin >> n;
    cin.ignore();
    while(n--){
        getline(cin,str);
        for(int i=0; i<str.size(); i++){
            if(str[i] >= 'a' && str[i] <= 'z')
                myset.insert(str[i]);
        }
        if(myset.size() < 13)
            cout << "frase mal elaborada" << endl;
        else if(myset.size() >= 13 && myset.size() < 26)
            cout << "frase quase completa" << endl;
        else
            cout << "frase completa" << endl;
        myset.clear();
    }

    return 0;
}
