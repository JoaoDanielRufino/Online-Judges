#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    bool upper,lower,num,inv;
    string str;

    while(getline(cin,str)){
        upper = lower = num = inv = false;
        for(int i = 0; i < str.size(); i++){
            if(str[i] >= 'a' && str[i] <= 'z')
                lower = true;
            else if(str[i] >= 'A' && str[i] <= 'Z')
                upper = true;
            else if(isdigit(str[i]))
                num = true;
            else
                inv = true;
        }
        if(inv)
            cout << "Senha invalida." << endl;
        else if(upper && lower && num && (str.size() >= 6 && str.size() <= 32))
            cout << "Senha valida." << endl;
        else
            cout << "Senha invalida." << endl;
    }

    return 0;
}
