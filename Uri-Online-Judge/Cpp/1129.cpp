#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,a,b,c,d,e,count;

    while(cin >> n, n){
        for(int i = 0; i < n; i++){
            count = 0;
            cin >> a >> b >> c >> d >> e;
            if(a <= 127){
                count++;
                a = 1;
            }
            else
                a = 0;
            if(b <= 127){
                count++;
                b = 1;
            }
            else
                b = 0;
            if(c <= 127){
                count++;
                c = 1;
            }
            else
                c = 0;
            if(d <= 127){
                count++;
                d = 1;
            }
            else
                d = 0;
            if(e <= 127){
                count++;
                e = 1;
            }
            else
                e = 0;

            if(count == 1){
                if(a)
                    cout << "A" << endl;
                if(b)
                    cout << "B" << endl;
                if(c)
                    cout << "C" << endl;
                if(d)
                    cout << "D" << endl;
                if(e)
                    cout << "E" << endl;
            }
            else
                cout << "*" << endl;
        }
    }

    return 0;
}
