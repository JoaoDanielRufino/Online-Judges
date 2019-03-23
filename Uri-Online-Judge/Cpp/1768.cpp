#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,space,count;
    char c = '*';

    while(cin >> n){
        count = 1;
        space = n/2 + 1;
        for(int i = 0; i <= n/2; i++){
            printf("%*c", space,c);
            for(int j = 1; j < count; j++)
                printf("%c", c);
            cout << endl;
            space--;
            count += 2;
        }
        space = n/2 + 1;
        printf("%*c\n", space,c);
        printf("%*c%c%c\n\n", space-1,c,c,c);
    }

    return 0;
}
