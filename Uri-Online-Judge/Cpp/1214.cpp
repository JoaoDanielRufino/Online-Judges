#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,a,x,count;
    float media;
    vector<int> vet;

    cin >> n;

    while(n--){
        count = 0;
        media = 0.0;
        cin >> a;
        while(a--){
            cin >> x;
            vet.push_back(x);
            media += x;
        }
        media /= vet.size();
        for(int i = 0; i < vet.size(); i++){
            if(vet[i] > media)
                count++;
        }
        cout << fixed << setprecision(3) << (float) (count*100.0)/vet.size() << "%" << endl;
        vet.clear();
    }

    return 0;
}
