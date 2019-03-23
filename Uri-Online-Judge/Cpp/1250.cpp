#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
	  int t,n,count;
    string str;

    cin >> t;

    while(t--){
        cin >> n;
        int *vet = new int[n];
        for(int i = 0; i < n; i++)
            cin >> vet[i];
        cin >> str;

        count = 0;
        for(int i = 0; i < n; i++){
            if(str[i] == 'J' && vet[i] > 2)
                count++;
            else if(str[i] == 'S' && (vet[i] == 1 || vet[i] == 2))
                count++;
        }
        cout << count << endl;
    }

    return 0;
}
