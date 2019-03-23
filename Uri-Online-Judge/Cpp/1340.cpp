#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,a,b;
    bool stack1,queue1,p_queue;

    while(cin >> n){
        stack<int> st;
        queue<int> q;
        priority_queue<int> pq;
        stack1 = queue1 = p_queue = true;
        while(n--){
            cin >> a >> b;
            if(a == 1){
                st.push(b);
                q.push(b);
                pq.push(b);
            }
            else{
                if(b == st.top() && stack1)
                    st.pop();
                else
                    stack1 = false;
                if(b == q.front() && queue1)
                    q.pop();
                else
                    queue1 = false;
                if(b == pq.top() && p_queue)
                    pq.pop();
                else
                    p_queue = false;
            }
        }
        if(stack1 && !queue1 && !p_queue)
            cout << "stack" << endl;
        else if(queue1 && !stack1 && !p_queue)
            cout << "queue" << endl;
        else if(p_queue && !stack1 && !queue1)
            cout << "priority queue" << endl;
        else if(!stack1 && !queue1 && !p_queue)
            cout << "impossible" << endl;
        else
            cout << "not sure" << endl;
    }

    return 0;
}
