#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int j,flag;
    char pos1,pos2;
    string str;
    vector<char> vet;
    vector<char>::iterator it;

    while(getline(cin,str)){
        flag = 0;
        for(int i=0; i<str.size(); i++)
            vet.push_back(str[i]);
        sort(vet.begin(), vet.end());
        it = unique(vet.begin(), vet.end()); //Remove elementos repetidos.
        vet.resize(distance(vet.begin(), it));
        for(int i=0; i<vet.size(); i++){
            if(vet[i] != ' '){
                j = i;
                pos1 = vet[j];
                pos2 = vet[j];
                while(vet[j+1] - vet[j] == 1){
                    j++;
                    pos2 = vet[j];
                }
                i = j;
                if(!flag){
                    cout << pos1 << ":" << pos2;
                    flag = 1;
                }
                else
                    cout << ", " << pos1 << ":" << pos2;
            }
        }
        vet.clear();
        cout << endl;
    }

    return 0;
}
