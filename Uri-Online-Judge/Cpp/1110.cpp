#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);

    int n,aux,j;

    while(cin >> n, n){
        int discarded[50]={0};
        queue<int> queue;
        for(int i=1; i<=n; i++)
            queue.push(i);
        j=0;
        while(queue.size()>=2){
            discarded[j++] = queue.front();
            queue.pop();
            aux = queue.front();
            discarded[j] = queue.front();
            queue.pop();
            queue.push(aux);
        }
        if(!j)
            cout << "Discarded cards:\n";
        else
            cout << "Discarded cards: ";
        for(int k=0; k<j; k++){
            if(k==j-1 || j==0)
                cout << discarded[k] << endl;
            else
                cout << discarded[k] << ", ";
        }
        cout << "Remaining card: " << queue.front() << endl;
    }

    return 0;
}
