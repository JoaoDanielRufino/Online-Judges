#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    string str;
    map<string,int> mymap;
    map<char,string> abrev;
    map<char,int> eco;

    while(1){
        stringstream ss1,ss2;
        getline(cin,str);
        if(str[0] == '.')
            break;

        ss1 << str;
        ss2 << str;
        while(ss1 >> str)
            mymap[str]++;

        for(map<string,int>::iterator it = mymap.begin(); it != mymap.end(); it++){
            int tam = it->first.size();
            int tam_eco = it->second * (tam - 2);
            if(tam > 2 && tam_eco > eco[it->first[0]]){
                eco[it->first[0]] = tam_eco;
                abrev[it->first[0]] = it->first;
            }
        }

        bool flag = false;
        map<char,string>::iterator it1;
        while(ss2 >> str){
            it1 = abrev.find(str[0]);
            if(it1 != abrev.end()){
                if(str == abrev[str[0]]){
                    if(!flag)
                        cout << str[0] << ".";
                    else
                        cout << " " << str[0] << ".";
                }
                else{
                    if(!flag)
                        cout << str;
                    else
                        cout << " " << str << "";
                }
            }
            else{
                if(!flag)
                    cout << str;
                else
                    cout << " " << str << "";
            }
            flag = true;
        }

        cout << endl << abrev.size() << endl;
        for(map<char,string>::iterator it = abrev.begin(); it != abrev.end(); it++){
            cout << it->first << ". = " << it->second << endl;
        }

        mymap.clear();
        abrev.clear();
        eco.clear();
    }


    return 0;
}
