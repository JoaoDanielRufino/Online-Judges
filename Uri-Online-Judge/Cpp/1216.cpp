#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int dist,count=0;
    double media=0.0;
    string str;

    while(getline(cin,str)){
        cin >> dist;
        cin.ignore();
        media += dist;
        count++;
    }

    cout << fixed << setprecision(1) << media/count << endl;

    return 0;
}
