#include <bits/stdc++.h>

using namespace std;

void backpack(vector<pair<int,int> > vec, int pac, int maxwt){
    int t[pac+1][maxwt+1];
    for(int i=0; i<=pac; i++){
        for(int j=0; j<=maxwt; j++){
            if(!i || !j)
                t[i][j] = 0;
            else if(vec[i-1].second > j)
                t[i][j] = t[i-1][j];
            else
                t[i][j] = max(vec[i-1].first + t[i-1][j-vec[i-1].second], t[i-1][j]);
        }
    }
    cout << t[pac][maxwt] << " brinquedos" << endl;
    int j=maxwt,count=0,wt=0;
    for(int i=pac; i>0; i--){
        if(t[i][j] != t[i-1][j]){
            j -= vec[i-1].second;
            wt += vec[i-1].second;
            count++;
        }
    }
    cout << "Peso: " << wt << " kg"<< endl;
    cout << "sobra(m) " << pac-count << " pacote(s)" << endl << endl;
}

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,pac,value,wt;
    vector<pair<int,int> > vec;

    cin >> n;
    while(n--){
        cin >> pac;
        for(int i=0; i<pac; i++){
            cin >> value >> wt;
            vec.push_back(make_pair(value,wt));
        }
        backpack(vec,pac,50);
        vec.clear();
    }

    return 0;
}
