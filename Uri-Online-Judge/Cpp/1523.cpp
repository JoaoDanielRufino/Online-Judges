#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,k,c,s;
    bool flag;

    while(cin >> n >> k, (n || k)){
        stack< pair<int,int> > st;
        flag = true;
        for(int i = 0; i < n; i++){
            cin >> c >> s;
            if(!st.empty() && flag){
                while(!st.empty() && c >= st.top().second)
                    st.pop();
                if(!st.empty()){
                    if(s > st.top().second)
                        flag = false;
                    else
                        st.push(make_pair(c, s));
                }
            }
            if(!st.empty() && st.size() > k)
                flag = false;
            else if(st.empty())
                st.push(make_pair(c, s));
        }
        if(flag)
            cout << "Sim" << endl;
        else
            cout << "Nao" << endl;
    }

    return 0;
}
