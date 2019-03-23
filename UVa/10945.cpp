#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    string str,aux1,aux2;

    while(1){
        getline(cin,str);
        if(str == "DONE")
            break;
        for(int i = 0; i < str.size(); i++){
            if(tolower(str[i]) >= 'a' && tolower(str[i]) <= 'z')
                aux1 += tolower(str[i]);
        }
        aux2 = aux1;
        reverse(aux1.begin(), aux1.end());
        if(aux1 == aux2)
            cout << "You won't be eaten!" << endl;
        else
            cout << "Uh oh.." << endl;
        aux1.clear();
        aux2.clear();
    }

    return 0;
}
