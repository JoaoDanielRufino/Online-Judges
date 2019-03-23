#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    string str,aux;
    vector<string> vet;
    map<string,string> mp;

    while(getline(cin, str)){
        for(int i = 0; i < str.size(); i++)
            aux += tolower(str[i]);
        vet.push_back(aux);
        mp[aux] = str;
        aux.clear();
    }

    sort(vet.begin(), vet.end());

    cout << mp[vet[vet.size()-1]] << endl;

    return 0;
}
