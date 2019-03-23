#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int media,nump,count,flag,sum;
    string str;

    while(getline(cin,str)){
        sum = nump = 0;
        for(int i=0; i<str.size(); i++){
            if(str[i] != ' '){
                count = 0;
                flag = 1;
                while(str[i] != ' ' && str[i]){
                    if(tolower(str[i]) >= 'a' && tolower(str[i]) <= 'z' && flag){
                        count++;
                        if(str[i+1] == '.' && (str[i+2] == ' ' || str[i+2] == '\0'))
                            i++;
                        else if(str[i+1] == '.' && (str[i+2] != ' ' || str[i+2] != '\0'))
                            flag = 0;
                    }
                    else
                        flag = 0;
                    i++;
                }
                if(flag){
                    nump++;
                    sum += count;
                }
            }
        }
        if(!nump)
            cout << "250" << endl;
        else{
            media = sum/nump;
            if(media <= 3)
                cout << "250" << endl;
            else if(media == 4 || media == 5)
                cout << "500" << endl;
            else if(media >= 6)
                cout << "1000" << endl;
        }
    }

    return 0;
}
