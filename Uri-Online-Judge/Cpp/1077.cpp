#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n;
    string str;
    stack<char> st;
    map<char,int> comp;

    comp['+'] = 1;
    comp['-'] = 1;
    comp['*'] = 2;
    comp['/'] = 2;
    comp['^'] = 3;

    cin >> n;

    while(n--){
        cin >> str;
        for(int i = 0; i < str.size(); i++){
            if(str[i] == '(')
                st.push(str[i]);
            else if(str[i] == ')'){
                while(st.top() != '('){
                    cout << st.top();
                    st.pop();
                }
                st.pop();
            }
            else if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '^'){
                 while(!st.empty() && comp[st.top()] >= comp[str[i]]){
                    cout << st.top();
                    st.pop();
                }
                st.push(str[i]);
            }
            else
                cout << str[i];
        }
        while(!st.empty()){
            cout << st.top();
            st.pop();
        }
        cout << endl;
    }

    return 0;
}
