#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,count;
    float cons=0,gast=0,price;
    string str;

    cin >> n;

    for(int i = 0; i < n; i++){
        count = 0;
        cin >> price;
        cin.ignore();
        getline(cin,str);

        gast += price;
        stringstream ss;
        ss << str;
        while(ss >> str){
            count++;
            cons++;
        }
        cout << "day " << i+1 << ": " << count << " kg" << endl;
    }

    cout << fixed << setprecision(2) << cons/n << " kg by day" << endl;
    cout << fixed << setprecision(2) << "R$ " << gast/n << " by day" << endl;

    return 0;
}
