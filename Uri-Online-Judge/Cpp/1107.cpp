#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int a,c,n,count,ant;

    while(cin >> a >> c, (a || c)){
        for(int i = 0; i < c; i++){
            cin >> n;
            if(!i)
                count = a - n;
            else{
                if(n < ant)
                    count += (ant-n);
            }
            ant = n;
        }
        cout << count << endl;
    }

    return 0;
}
