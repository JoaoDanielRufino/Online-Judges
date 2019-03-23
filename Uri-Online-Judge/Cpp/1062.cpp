#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,v,max,flag;

    while(cin >> n, n){
        while(1){
            cin >> v;
            if(!v){
                cout << endl;
                break;
            }
            stack<int> trem;
            stack<int> a;
            trem.push(v);
            for(int i=0; i<n-1; i++){
                cin >> v;
                trem.push(v);
            }
            flag=1;
            max=n;
            while(max){
                if(trem.empty())
                    flag=0;
                if(!trem.empty() && trem.top()==max){
                    trem.pop();
                    max--;
                }
                else if(!a.empty() && a.top()==max){
                    a.pop();
                    max--;
                }
                else if(!a.empty() && a.top()!=max && !flag)
                    break;
                else if(!trem.empty() && trem.top() < max){
                    a.push(trem.top());
                    trem.pop();
                }
            }
            if(a.empty())
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }

    return 0;
}
