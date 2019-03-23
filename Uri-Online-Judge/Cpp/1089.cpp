#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,a,count,tmp,fst,snd;
    bool lower,higher;

    while(cin >> n, n){
        count = 0;
        lower = higher = true;
        for(int i = 0; i < n; i++){
            cin >> a;
            if(!i)
                fst = a;
            if(i == 1)
                snd = a;
            if(i > 0){
                if(a > tmp && lower){
                    count++;
                    higher = true;
                    lower = false;
                }
                else if(a < tmp && higher){
                    count++;
                    lower = true;
                    higher = false;
                }
            }
            if(i == n-1){
                if(fst > a && fst > snd && lower)
                    count++;
                else if(fst < a && fst < snd && higher)
                    count++;
            }
            tmp = a;
        }
        cout << count << endl;
    }

    return 0;
}
