#include <bits/stdc++.h>

using namespace std;

bool comp(const pair<int,int> &a, const pair<int,int> &b){
    if(a.second == b.second)
        return a.first > b.first;
    return a.second < b.second;
}

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    bool flag = false;
    string str;
    vector<pair<int,int> > vet;
    map<int,int> mymap;
    map<int,int>::iterator it;

    while(getline(cin,str)){
        if(flag)
            cout << endl;
        for(int i=0; i<str.size(); i++)
            mymap[str[i]]++;

        for(it=mymap.begin(); it!=mymap.end(); it++)
            vet.push_back(make_pair(it->first,it->second));

        sort(vet.begin(),vet.end(),comp);
        for(int i=0; i<vet.size(); i++)
            cout << vet[i].first << " " << vet[i].second << endl;
        flag = true;
        mymap.clear();
        vet.clear();
    }

    return 0;
}
