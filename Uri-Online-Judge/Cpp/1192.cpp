#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,a,b,total;
    string str;

    cin >> n;

    while(n--){
        cin >> str;
        if(str[0] == str[2])
            total = (str[0]-48) * (str[2]-48);
        else{
            if(str[1] >= 'A' && str[1] <= 'Z')
                total = (str[2]-48) - (str[0]-48);
            else
                total = (str[0]-48) + (str[2]-48);
        }
        cout << total << endl;
    }

    return 0;
}
