#include <bits/stdc++.h>

using namespace std;

typedef struct aluno{
    string nome;
    string freq;
}Aluno;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int count,t,n,M,pre,flag;
    Aluno al[100];

    cin >> t;

    while(t--){
        cin >> n;
        flag = 0;
        for(int i=0; i<n; i++){
            cin.ignore();
            cin >> al[i].nome;
        }
        for(int i=0; i<n; i++){
            cin.ignore();
            cin >> al[i].freq;
        }
        for(int i=0; i<n; i++){
            count = M = 0;
            for(int j=0; j<al[i].freq.size(); j++){
                if(al[i].freq[j] == 'P')
                    count++;
                else if(al[i].freq[j] == 'M')
                    M++;
            }
            if(M != al[i].freq.size())
                pre = (count*100)/(al[i].freq.size()-M);
            else
                pre = 100;
            if(pre < 75){
                if(!flag){
                    cout << al[i].nome;
                    flag = 1;
                }
                else
                    cout << " " << al[i].nome;
            }
        }
        cout << endl;
    }

    return 0;
}
