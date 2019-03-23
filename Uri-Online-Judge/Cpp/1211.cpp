#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,count;
    string str,str2;
    vector<string> vet;
    vector<string>::iterator it1, it2;

    while(cin >> n){
        count = 0;
        for(int i = 0; i < n; i++){
            cin >> str;
            vet.push_back(str);
        }

        sort(vet.begin(), vet.end());

        it1 = vet.begin();
        it2 = it1;
        it2++;
        while(it2 != vet.end()){
            str = *it1;
            str2 = *it2;
            for(int i = 0; i < str.size(); i++){
                if(str[i] == str2[i])
                    count++;
                else
                    break;
            }
            it1++;
            it2++;
        }

        cout << count << endl;
        vet.clear();
    }

    return 0;
}
