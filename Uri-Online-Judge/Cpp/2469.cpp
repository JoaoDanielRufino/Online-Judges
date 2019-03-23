#include <bits/stdc++.h>

using namespace std;

int main(){

	ios::sync_with_stdio(false); cin.tie(0);
	int n,a,max = -1,elem;
	map<int,int> mymap;
	map<int,int>::iterator it;

	cin >> n;

	while(n--){
		cin >> a;
		mymap[a]++;
	}

	for(it = mymap.begin(); it != mymap.end(); it++){
		if(it->second >= max){
			max = it->second;
			elem = it->first;
		}
	}

	cout << elem << endl;

    return 0;
}
