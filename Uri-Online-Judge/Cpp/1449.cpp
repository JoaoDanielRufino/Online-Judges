#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int t,m,n;
    bool flag;
    string jap,port,str;
    map<string,string> mymap;
    map<string,string>::iterator it;

    cin >> t;

    while(t--){
        cin >> m >> n;

        while(m--){
            cin >> jap;
            cin.ignore();
            getline(cin, port);
            mymap[jap] = port;
        }

        while(n--){
            getline(cin, str);
            stringstream ss;
            ss << str;
            flag = false;
            while(ss >> str){
                it = mymap.find(str);
                if(it != mymap.end()){
                    if(!flag)
                        cout << mymap[str];
                    else
                        cout << " " << mymap[str];
                }
                else{
                    if(!flag)
                        cout << str;
                    else
                        cout << " " << str;
                }
                flag = true;
            }
            cout << endl;
        }
        cout << endl;
        mymap.clear();
    }

    return 0;
}
