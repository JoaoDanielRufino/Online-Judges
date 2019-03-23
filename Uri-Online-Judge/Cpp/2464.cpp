#include <bits/stdc++.h>

using namespace std;

int main(){

	ios::sync_with_stdio(false); cin.tie(0);
	string str1,str2;

	cin >> str1 >> str2;

	for(int i = 0; i < str2.size(); i++)
		cout << str1[str2[i]-97];

	cout << endl;

    return 0;
}
