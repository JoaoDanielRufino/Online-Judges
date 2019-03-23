#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,count;
    char aux;
    string str;

    cin >> n;
    cin.ignore();
    while(n--){
        cin >> str;
        count = 1;
        for(int i = 0; i < str.size(); i++){
            aux = tolower(str[i]);
            if(aux == 'a' || aux == 'e' || aux == 'i' || aux == 'o' || aux == 's')
                count *= 3;
            else if(aux >= 'a' && aux <= 'z')
                count *= 2;
            else if(aux == '4' || aux == '3' || aux == '1' || aux == '0' || aux == '5')
                count *= 2;
        }
        cout << count << endl;
    }

    return 0;
}
