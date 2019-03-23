#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    bool flag;
    string str,aux;
    list<char> li;
    list<string> li2;
    list<char>::iterator it;
    list<string>::iterator it2;

    while(cin >> str){
        for(int i = 0; i < str.size(); i++){
            if(str[i] == '['){
                aux.clear();
                flag = false;
                i++;
                while(str[i] != ']' && str[i]){
                    if(str[i] != '['){
                        aux += str[i];
                        flag = true;
                    }
                    else if(str[i] == '['){
                        li2.push_front(aux);
                        aux.clear();
                    }
                    i++;
                }
                if(flag)
                    li2.push_front(aux);
            }
            else if(str[i] != ']')
                li.push_back(str[i]);
        }
        for(it2 = li2.begin(); it2 != li2.end(); it2++)
            cout << *it2;
        for(it = li.begin(); it != li.end(); it++)
            cout << *it;
        li.clear();
        li2.clear();
        cout << endl;
    }

    return 0;
}
