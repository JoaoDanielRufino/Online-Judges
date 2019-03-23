#include <bits/stdc++.h>

using namespace std;

int reverse(int x){
    int tmp,rev = 0;
    while(x != 0){
        tmp = x%10;
        rev = rev*10 + tmp;
        x /= 10;
    }
    return rev;
}

int solve(int a, int b){
    bool seen[10000] = {false};
    int op1,op2,clicks,t;
    queue<pair<int,int> > q;

    seen[a] = true;
    q.push(make_pair(a, 0));
    while(1){
        op1 = q.front().first + 1;
        clicks = q.front().second + 1;
        op2 = reverse(q.front().first);
        q.pop();

        if(op1 == b || op2 == b)
            return clicks;

        if(!seen[op1]){
            q.push(make_pair(op1,clicks));
            seen[op1] = true;
        }
        if(!seen[op2]){
            q.push(make_pair(op2,clicks));
            seen[op2] = true;
        }
    }
}

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,a,b;

    cin >> n;

    while(n--){
        cin >> a >> b;
        cout << solve(a, b) << endl;
    }

    return 0;
}
