#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,x,root;

    cin >> n;

    while(n--){
        int count=1;
        cin >> x;
        if((!(x%2) && x!=2) || !x || x==1)
            cout << "Not Prime" << endl;
        else if(x==2)
            cout << "Prime" << endl;
        else{
          root = sqrt(x);
            for(int i=2; i<=root; i++){
                if(!(x%i)){
                    ++count;
                    cout << "Not Prime" << endl;
                    break;
                }
            }
            if(count==1)
                cout << "Prime" <<  endl;
        }
    }

    return 0;
}
