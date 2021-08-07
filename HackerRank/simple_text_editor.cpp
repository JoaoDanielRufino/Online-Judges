#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    int n, t, k;
    string curr, w;
    stack<string> st;
    
    cin >> n;
    while(n--) {
        cin >> t;
        
        if(t == 1) {
            cin >> w;
            st.push(curr);
            curr += w;
        } else if(t == 2) {
            cin >> k;
            st.push(curr);
            curr = curr.substr(0, curr.size()-k);
        } else if(t == 3) {
            cin >> k;
            cout << curr[k-1] << endl;
        } else if(t == 4) {
            curr = st.top();
            st.pop();
        }
    }
     
    return 0;
}
