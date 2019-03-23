#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int count;
    string vog,str;
    map<char,bool> mymap;

    while(cin >> vog){
        cin.ignore();
        getline(cin,str);
        count = 0;
        for(int i = 0; i < vog.size(); i++)
            mymap[vog[i]] = true;
        for(int i = 0; i < str.size(); i++){
            if(mymap[str[i]])
                count++;
        }
        cout << count << endl;
        mymap.clear();
    }

    return 0;
}
