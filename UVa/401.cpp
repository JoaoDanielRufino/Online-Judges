#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    bool palindrome,mirrored;
    string str;
    map<char,char> mp;

    mp['A'] = 'A';
    mp['E'] = '3';
    mp['H'] = 'H';
    mp['I'] = 'I';
    mp['J'] = 'L';
    mp['L'] = 'J';
    mp['M'] = 'M';
    mp['O'] = 'O';
    mp['S'] = '2';
    mp['T'] = 'T';
    mp['U'] = 'U';
    mp['V'] = 'V';
    mp['W'] = 'W';
    mp['X'] = 'X';
    mp['Y'] = 'Y';
    mp['Z'] = '5';
    mp['1'] = '1';
    mp['2'] = 'S';
    mp['3'] = 'E';
    mp['5'] = 'Z';
    mp['8'] = '8';

    while(cin >> str){
        palindrome = mirrored = false;
        string aux = str;

        reverse(aux.begin(), aux.end());
        if(str == aux)
            palindrome = true;

        aux.clear();
        for(int i = 0; i < str.size(); i++){
            if(mp[str[i]] != '\0')
                aux += mp[str[i]];
            else
                break;
        }
        reverse(aux.begin(), aux.end());
        if(str == aux)
            mirrored = true;

        if(palindrome && mirrored)
            cout << str << " -- is a mirrored palindrome.";
        else if(palindrome)
            cout << str << " -- is a regular palindrome.";
        else if(mirrored)
            cout << str << " -- is a mirrored string.";
        else
            cout << str << " -- is not a palindrome.";
        cout << endl << endl;
    }

    return 0;
}
