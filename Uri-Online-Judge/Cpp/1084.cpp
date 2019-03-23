#include <bits/stdc++.h>

using namespace std;


int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,d,pos;
    string str;
    list<char> li;
    list<char>::iterator it;

    while(cin >> n >> d){
        if(!n && !d)
            break;
        cin >> str;
        
        for(int i = 0; i < n; i++){
            while(!li.empty() && str[i] > li.back() && d){
                li.pop_back();
                d--;
            }
            li.push_back(str[i]);
        }
        
        while(d--)
            li.pop_back();
            
        for(it = li.begin(); it != li.end(); it++)
            cout << *it;
        li.clear();
        cout << endl;
    }

    return 0;
}
