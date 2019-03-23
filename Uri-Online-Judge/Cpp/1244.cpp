#include <bits/stdc++.h>

using namespace std;

bool comp(string a, string b){
    return a.size() > b.size();
}

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,j,k;
    string str1;
    vector<string> vet;
    vector<string>::iterator it;

    cin >> n;
    cin.ignore();
    while(n--){
        getline(cin,str1);
        for(int i=0; i<str1.size(); i++){
            j = i;
            k = 0;
            char str2[300]={'\0'};
            while(str1[j] != ' ' && str1[j]){
                str2[k] = str1[j];
                j++;
                k++;
            }
            vet.push_back(str2);
            i = j;
        }
        stable_sort(vet.begin(),vet.end(),comp);
        for(it=vet.begin(); it!=vet.end(); it++){
            if(it == vet.begin())
                cout << *it;
            else
                cout << " " << *it;
        }
        vet.clear();
        cout << endl;
    }

    return 0;
}
