#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,m,num,total,count;
    string str;
    map<string,int> mymap;

    cin >> n >> m;

    while(n--){
        cin >> str >> num;
        mymap[str] = num;
    }
    cin.ignore();
    count = total = 0;
    while(1){
        getline(cin,str);
        if(str[0] == '.'){
            cout << total << endl;
            total = 0;
            count++;
            if(count == m)
                break;
        }
        stringstream ss;
        ss << str;
        while(ss >> str)
            total += mymap[str];
    }

    return 0;
}
