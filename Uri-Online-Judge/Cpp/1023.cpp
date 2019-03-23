#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,x,y,city=1,pe,count;
    double med;
    map<int,int> mymap;
    map<int,int>::iterator it;

    while(cin >> n, n){
        pe = count = 0;
        while(n--){
            cin >> x >> y;
            pe += x;
            count += y;
            mymap[y/x] += x;
        }
        med = (double) count/pe - 0.0049999;
        cout << "Cidade# " << city++ << ":" << endl;
        for(it=mymap.begin(); it!=mymap.end(); it++){
            if(it==mymap.begin())
                cout << it->second << "-" << it->first;
            else
                cout << " " << it->second << "-" << it->first;
        }
        cout.precision(2);
        cout << endl << "Consumo medio: " << fixed << med << " m3." << endl << endl;
        mymap.clear();
    }

    return 0;
}
