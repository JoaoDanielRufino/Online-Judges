#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,x;
    map<int,int> mymap;
    map<int,int>::iterator it;

    cin >> n;

    while(n--){
        cin >> x;
        mymap[x]++;
    }

    for(it=mymap.begin(); it!=mymap.end(); it++)
        cout << it->first << " aparece " << it->second << " vez(es)" << endl;

    return 0;
}
