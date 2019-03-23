#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,i,j;
    char str1[50],str2[50];

    while(cin >> n, n){
        stack<char> st;
        for(i = 0; i < n; i++)
            cin >> str1[i];
        for(i = 0; i < n; i++)
            cin >> str2[i];
        str1[n] = str2[n] = '\0';
        i = j = 0;
        while(1){
            if(!st.empty() && st.top() == str2[j] && j < n){
                st.pop();
                cout << "R";
                j++;
            }
            else if(i < n){
                st.push(str1[i++]);
                cout << "I";
            }
            else if(st.top() != str2[j] && i >= n){
                cout << " Impossible";
                break;
            }
            if(st.empty() && i >= n)
                break;
        }
        cout << endl;
    }

    return 0;
}
