#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int j,res;
    bool dot;
    string num,cutoff,adot;

    while(cin >> num){
        cin >> cutoff;
        char bdot[20]={'\0'};
        dot = false;
        j = 0;
        for(int i = 0; i < num.size(); i++){
            if(dot)
                adot += num[i];
            if(num[i] == '.')
                dot = true;
            if(!dot)
                bdot[j++] = num[i];
        }
        cutoff.erase(0,2);
        if(dot && !adot.empty()){
            if(adot.compare(cutoff) < 0){
                res = atoi(bdot);
                cout << res << endl;
            }
            else{
                res = atoi(bdot);
                cout << res+1 << endl;
            }
        }
        else
            cout << bdot << endl;
        adot.clear();
    }

    return 0;
}
