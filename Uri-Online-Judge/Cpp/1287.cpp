#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,flag,flag2,count;
    string str,number;

    while(getline(cin,str)){
        flag = flag2 = count = 0;
        for(int i=0; i<str.size(); i++){
            if(str[i] == '0' && flag)
                number += str[i];
            else if(str[i] >= '1' && str[i] <= '9'){
                number += str[i];
                flag = 1;
            }
            else if((str[i] == 'O' || str[i] == 'o') && flag)
                number += '0';
            else if(str[i] == 'l'){
                number += '1';
                flag = 1;
            }
            else if(str[i] == ',' || str[i] == ' ')
                count++;
            else if(str[i] != 'O' && str[i] != 'o' && str[i] != 'l' && !isdigit(str[i]) && str[i] != ',' && str[i] != ' '){
                flag2 = 1;
                break;
            }
        }

        if(count == str.size())
            cout << "error" << endl;
        else if(!str.empty() && !flag && !flag2)
            cout << "0" << endl;
        else if(number.size() == 10 && number.compare("2147483647") > 0)
            cout << "error" << endl;
        else if(number.size() > 10)
            cout << "error" << endl;
        else if(number.empty() || flag2)
            cout << "error" << endl;
        else
            cout << number << endl;
        number.clear();
    }

    return 0;
}
