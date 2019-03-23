#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;

    cin >> n;
    getchar();

    while(n--){
        int count=0;
        stack<char> st;
        string str;
        getline(cin,str);
        for(int i=0; i<str.size(); i++){
            if(str[i]=='<')
                st.push(str[i]);
            if(str[i]=='>' && !st.empty()){
                st.pop();
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}
