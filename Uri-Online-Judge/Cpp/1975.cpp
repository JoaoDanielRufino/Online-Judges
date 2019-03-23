#include <bits/stdc++.h>

using namespace std;

bool comp(const pair<string,int> &a, const pair<string,int> &b){
    if(a.second != b.second)
        return a.second > b.second;
    return a.first < b.first;
}

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int p,a,r,count;
    string str,name;
    map<string,bool> perola;
    vector<pair<string,int> > aluno;

    while(cin >> p >> a >> r, p,a,r){
        cin.ignore();
        for(int i = 0; i < p; i++){
            getline(cin,str);
            perola[str] = true;
        }
        for(int i = 0; i < a; i++){
            cin >> name;
            cin.ignore();
            count = 0;
            for(int j = 0; j < r; j++){
                getline(cin,str);
                if(perola[str])
                    count++;
            }
            aluno.push_back(make_pair(name,count));
        }
        sort(aluno.begin(), aluno.end(), comp);
        cout << aluno[0].first;
        int i = 1;
        while(aluno[i].second == aluno[0].second && i < aluno.size()){
            if(aluno[i].first != aluno[i-1].first)
                cout << ", " << aluno[i].first;
            i++;
        }
        perola.clear();
        aluno.clear();
        cout << endl;
    }

    return 0;
}
