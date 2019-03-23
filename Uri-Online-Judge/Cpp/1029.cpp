#include <bits/stdc++.h>

using namespace std;

int fib(int n, int *num){
    (*num)++;
    if(!n)
        return 0;
    if(n == 1)
        return 1;
    return fib(n-1,num) + fib(n-2,num);
}

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,num,a,f;

    cin >> n;

    while(n--){
        cin >> a;
        num = 0;
        f = fib(a,&num);
        cout << "fib(" << a << ") = " <<  num-1 << " calls = " << f << endl;
    }

    return 0;
}
