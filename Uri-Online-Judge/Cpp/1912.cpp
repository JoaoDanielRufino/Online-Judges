#include <bits/stdc++.h>

using namespace std;

float binarySearch(vector<float> vet, int max, int a){
	float left = 0.0, right = max;
	float m,ac;

	while(left <= right){
		m = (right + left)/2.0;
	 	ac = 0.0;

		for(int i = 0; i < vet.size(); i++){
			if(m <= vet[i]){
				ac += vet[i] - m;
			}
		}

		if(ac == a || right - left < 0.000005)
			return m;
		else if(ac > a)
			left = m;
		else
			right = m;
	}
}

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
	int n,a,c,sum,max;
	float altura;
	vector<float> vet;

	while(cin >> n >> a){
		if(!n && !a)
			break;
		max = sum = 0;
		while(n--){
			cin >> c;
			sum += c;
			if(c > max)
				max = c;
			vet.push_back(c);
		}
		if(sum == a)
			cout << ":D" << endl;
		else if(sum < a)
			cout << "-.-" << endl;
		else
			cout << fixed << setprecision(4) << binarySearch(vet, max, a) << endl;

		vet.clear();
	}

    return 0;
}
