#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n;
    char uri[3],obi[3];
    string str1,str2;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> str1;
        if(str1.size() == 3){
            if(str1[0] == 'U' && str1[1] == 'R'){
                if(!i)
                    str2 += "URI";
                else
                    str2 += " URI";
            }
            else if(str1[0] == 'O' && str1[1] == 'B'){
                if(!i)
                    str2 += "OBI";
                else
                    str2 += " OBI";
            }
            else{
                if(!i)
                    str2 += str1;
                else
                    str2 += " " + str1;
            }

        }
        else{
            if(!i)
                str2 += str1;
            else
                str2 += " " + str1;
        }
    }

    cout << str2 << endl;

    return 0;
}
