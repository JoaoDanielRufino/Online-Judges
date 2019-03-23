#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,tempo,count,p;
    char prob;
    string resp;
    map<char,int> mymap;

    while(cin >> n, n){
        count = p = 0;
        for(int i = 0; i < n; i++){
            cin >> prob >> tempo >> resp;
            if(resp.compare("incorrect") == 0)
                mymap[prob] += 20;
            else{
                count++;
                p += tempo + mymap[prob];
            }
        }
        cout << count << " " << p << endl;
        mymap.clear();
    }

    return 0;
}
