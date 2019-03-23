#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    string d,s;
    size_t found;

    while(cin >> d >> s){
        found = d.find(s);
        if(found != string::npos)
            cout << "Resistente" << endl;
        else
            cout << "Nao resistente" << endl;
    }

    return 0;
}
