#include <bits/stdc++.h>

using namespace std;


int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,count;
    string str1,str2;

    cin >> n;
    cin.ignore();
    while(n--){
        cin >> str1 >> str2;
        count = 0;
        if(!str1.compare(str2))
            cout << "0" << endl;
        else{
            for(int i=0; i<str1.size(); i++){
                if(str1[i] <= str2[i])
                    count += str2[i] - str1[i];
                else
                    count += abs(str1[i] - str2[i] - 26);
            }
            cout << count << endl;
        }
    }

    return 0;
}
