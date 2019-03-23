#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int x1,y1,r1,x2,y2,r2;
    double dist;

    while(cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2){
        dist = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
        if(r1 >= dist+r2)
            cout << "RICO" << endl;
        else
            cout << "MORTO" << endl;
    }

    return 0;
}
