#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int count,init,j,i;
    string str,num,tag;

    while(cin >> tag){
        cin >> num;
        cin.ignore();
        getline(cin,str);
        i = 0;
        while(str[i]){
            if(str[i++] == '<'){
                while(str[i] != '>' && str[i] != '\0'){
                    j = count = 0;
                    init = i;
                    while(tolower(tag[j]) == tolower(str[i])){
                        count++;
                        j++;
                        i++;
                        if(tag[j] == '\0'){
                            i -= tag.size();
                            str.replace(str.begin()+init, str.begin()+count+init, num);
                        }
                    }
                    i++;
                }
            }
        }
        cout << str << endl;
    }

    return 0;
}
