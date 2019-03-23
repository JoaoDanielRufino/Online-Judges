#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int j,count,k,max;
    char str1[60],str2[60];

    while(gets(str1)){
        gets(str2);
        max=0; count=0;
        for(int i=0; i<strlen(str1); i++){
            for(int j=0; j<strlen(str2); j++){
                if(str1[i] == str2[j]){
                    count=0;
                    k=0;
                    while(str1[k+i] == str2[k+j] && str1[k+i] != '\0'){
                        count++;
                        k++;
                    }
                }
                if(count > max)
                    max = count;
            }
        }
        cout << max << endl;
    }

    return 0;
}
