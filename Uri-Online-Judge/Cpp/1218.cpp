#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,a,f,m,ig,c=1;
    bool flag,flag2=false;
    string str,num;

    while(cin >> n){
        if(flag2)
            cout << endl;
        f = m = ig = 0;
        cin.ignore();
        getline(cin,str);

        stringstream ss,ss2;
        ss << str;
        ss2 << n;
        ss2 >> num;
        flag = false;
        while(ss >> str){
            if(str == num){
                ig++;
                flag = true;
            }
            else if(str[0] == 'M' && flag){
                m++;
                flag = false;
            }
            else if(str[0] == 'F' && flag){
                f++;
                flag = false;
            }
        }
        cout << "Caso " << c++ << ":" << endl;
        cout << "Pares Iguais: " << ig << endl;
        cout << "F: " << f << endl;
        cout << "M: " << m << endl;
        flag2 = true;
    }

    return 0;
}
