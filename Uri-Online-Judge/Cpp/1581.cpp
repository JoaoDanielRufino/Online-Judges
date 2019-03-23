#include <bits/stdc++.h>

using namespace std;


int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,m,flag;
    string str1,str2;

    cin >> n;

    while(n--){
        cin >> m;
        cin >> str1;
        flag = 0;
        m--;
        while(m--){
            cin >> str2;
            if(str1.compare(str2) != 0)
                flag = 1;
        }
        if(flag)
            cout << "ingles" << endl;
        else
            cout << str1 << endl;
    }

    return 0;
}
