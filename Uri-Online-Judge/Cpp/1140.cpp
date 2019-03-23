#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    bool flag;
    char c;
    string str;

    while(getline(cin,str)){
        if(str[0] == '*')
            break;

        flag = true;
        c = tolower(str[0]);
        stringstream ss;
        ss << str;
        while(ss >> str){
            if(c != tolower(str[0])){
                cout << "N" << endl;
                flag = false;
                break;
            }
        }
        if(flag)
            cout << "Y" << endl;
    }

    return 0;
}
