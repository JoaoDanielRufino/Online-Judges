#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n;
    double percent,count;
    char c;
    bool flag=false;
    string str;
    map<string,int> mymap;
    map<string,int>::iterator it;

    cin >> n;
    cin.ignore();
    while(n--){
        if(flag)
            cout << endl;
        else
            getline(cin,str);
        count = 0.0;
        while(getline(cin,str)){
            if(str == ""){
                flag = true;
                break;
            }
            mymap[str]++;
            count++;
        }
        for(it = mymap.begin(); it != mymap.end(); it++){
            percent = (it->second/count) * 100.00;
            cout << it->first << " " << fixed << setprecision(4) << percent << endl;
        }
        mymap.clear();
    }

    return 0;
}
