#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int space,count;
    string str;

    while(cin >> str){
        count = 0;
        space = 1;
        for(int i = 0; i < str.size(); i++){
            for(int j = 0; j < str.size()-count; j++){
                if(!j)
                    printf("%*c", space,str[j]);
                else
                    printf(" %c", str[j]);
            }
            count++;
            space++;
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
