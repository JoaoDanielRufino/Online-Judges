#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int j;
    string str1,str2;
    set<string> myset;
    set<string>::iterator it;

    while(getline(cin,str1)){
        for(int i = 0; i < str1.size(); i++){
            if(tolower(str1[i]) >= 'a' && tolower(str1[i]) <= 'z'){
                j = i;
                while(str1[j] != ' ' && str1[j] != '\0' && tolower(str1[j]) >= 'a' && tolower(str1[j]) <= 'z')
                    str2 += tolower(str1[j++]);
                myset.insert(str2);
                str2.clear();
                i = j;
            }
        }
    }

    for(it = myset.begin(); it != myset.end(); it++)
        cout << *it << endl;

    return 0;
}
