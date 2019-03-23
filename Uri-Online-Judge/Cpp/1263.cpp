#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int flag,count;
    char aux;
    string str;

    while(getline(cin,str)){
        count = 0;
        flag = 1;
        for(int i=0; i<str.size(); i++){
            if(str[i] != ' '){
                aux = tolower(str[i]);
                for(int j=i+1; j<str.size(); j++){
                    if(str[j] == ' '){
                        j++;
                        if(aux == tolower(str[j]) && flag){
                            count++;
                            flag = 0;
                        }
                        else if(aux != str[j]){
                            flag = 1;
                            i = --j;
                            break;
                        }
                    }
                }
            }
            if(!flag)
                break;
        }
        cout << count << endl;
    }

    return 0;
}
