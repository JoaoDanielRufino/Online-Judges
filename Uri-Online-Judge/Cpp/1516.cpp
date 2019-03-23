#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,m,a,b;

    while(scanf("%d %d", &n,&m), n,m){
        char str[60][60]={'\0'};
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                scanf(" %c", &str[i][j]);
            }
        }
        scanf("%d %d", &a,&b);
        for(int i = 0; i < n; i++){
            for(int k = 0; k < a/n; k++){
                for(int l = 0; l < m; l++){
                    for(int j = 0; j < b/m; j++){
                        printf("%c", str[i][l]);
                    }
                }
                cout << endl;
            }
        }
        cout << endl;
    }


    return 0;
}
