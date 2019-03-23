#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    int flag,flag2,i;
    string str;

    while(getline(cin,str)){
        flag=0; flag2=0; i=0;
        while(i < str.size()){
            if(str[i] != '_' && str[i] != '*'){
                cout << str[i];
                i++;
            }
            if(str[i] == '_' && !flag){
                cout << "<i>";
                flag=1;
                i++;
            }
            if(str[i] == '_' && flag){
                cout << "</i>";
                flag=0;
                i++;
            }
            if(str[i] == '*' && !flag2){
                cout << "<b>";
                flag2=1;
                i++;
            }
            if(str[i] == '*' && flag2){
                cout << "</b>";
                flag2=0;
                i++;
            }
        }
        cout << endl;
    }

    return 0;
}
