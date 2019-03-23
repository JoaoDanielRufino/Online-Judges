#include <bits/stdc++.h>

using namespace std;

int main(){

    char str[1001];

    while(scanf("%s", str)!=EOF){
        stack<char> st;
        int flag=1;
        for(int i=0; i<strlen(str); i++){
            if(str[i]=='(')
                st.push(str[i]);
            else if(str[i]==')' && !st.empty())
                st.pop();
            else if(str[i]==')' && st.empty())
                flag=0;
        }
        if(st.empty() && flag)
            cout << "correct\n";
        else
            cout << "incorrect\n";
    }

    return 0;
}
