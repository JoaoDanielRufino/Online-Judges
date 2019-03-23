#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int count;
    string str;

    while(cin >> str){
        count = 0;
        stack<char> st;
        for(int i = 0; i < str.size(); i++){
            if(!st.empty()){
                if((str[i] == 'B' && st.top() == 'S') || (str[i] == 'S' && st.top() == 'B')){
                    count++;
                    st.pop();
                }
                else if((str[i] == 'F' && st.top() == 'C') || (str[i] == 'C' && st.top() == 'F')){
                    count++;
                    st.pop();
                }
                else
                    st.push(str[i]);
            }
            else
                st.push(str[i]);
        }
        cout << count << endl;
    }

    return 0;
}
