#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
	  int t,n,a,md,vet[12];

	  cin >> t;

	  for(int i = 1; i <= t; i++){
		  cin >> n;
		  for(int j = 0; j < n; j++){
			  cin >> vet[j];
		}
		if(n%2 != 0)
			md = vet[n/2];
		else
			md = (vet[n/2] + vet[n/2+1])/2;
		cout << "Case " << i << ": " << md << endl;
	}

    return 0;
}
