#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    bool flag = true;
    string str,aux;
    string::reverse_iterator rit;
    string::iterator it;

    cin >> str;

    for(int i = 0; i < str.size(); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            aux += str[i];
    }

    for(it = aux.begin(), rit = aux.rbegin(); it != aux.end(), rit != aux.rend(); it++, rit++){
        if(*it != *rit){
            flag = false;
            break;
        }
    }

    if(flag)
        cout << "S" << endl;
    else
        cout << "N" << endl;

    return 0;
}
