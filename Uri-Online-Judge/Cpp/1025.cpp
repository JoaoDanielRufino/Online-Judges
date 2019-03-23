#include <bits/stdc++.h>

using namespace std;

int binarysearch(vector<int> vet, int x, int size){
    int left=0,right = size-1,mid;
    while(left <= right){
        mid = (left + right)/2;
        if(vet[mid]==x)
            return mid;
        if(x < vet[mid])
            right = mid-1;
        else
            left = mid+1;
    }
    return -1;
}

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,q,ca=1,x,pos,num;
    vector<int> vet;

    while(1){
        cin >> n >> q;
        if(!n && !q)
            break;
        for(int i=0; i<n; i++){
            cin >> x;
            vet.push_back(x);
        }
        sort(vet.begin(),vet.end());
        cout << "CASE# " << ca++ << ":" << endl;
        while(q--){
            cin >> num;
            pos = binarysearch(vet,num,vet.size());
            if(pos==-1)
                cout << num << " not found" << endl;
            else{
                while(vet[pos]==vet[pos-1])
                    pos--;
                cout << num << " found at " << pos+1 << endl;
            }
        }
        vet.clear();
    }

    return 0;
}
