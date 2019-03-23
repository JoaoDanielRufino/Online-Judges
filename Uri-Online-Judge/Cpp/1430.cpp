#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int count;
    double tempo;
    map<char,double> mp;
    string str;

    mp['W'] = 1.0;
    mp['H'] = 0.5;
    mp['Q'] = 0.25;
    mp['E'] = 0.125;
    mp['S'] = 0.0625;
    mp['T'] = 0.03125;
    mp['X'] = 0.015625;

    while(1){
        cin >> str;
        if(str[0]=='*')
            break;
        tempo=0;
        count=0;
        for(int i=1; i<str.size(); i++){
            if(str[i]=='/' && tempo==1){
                count++;
                tempo=0;
            }
            else if(str[i]=='/' && tempo!=1)
                tempo=0;
            tempo += mp[str[i]];
        }
        cout << count << endl;
    }

    return 0;
}
