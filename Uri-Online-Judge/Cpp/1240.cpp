#include <bits/stdc++.h>

using namespace std;


int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,dif;
    string str1,str2;
    size_t found;
    
	cin >> n;

	while(n--){
		cin >> str1 >> str2;
		dif = str1.size() - str2.size();
		found = str1.find(str2,dif);
		if(found != string::npos)
			cout << "encaixa" << endl;
		else
			cout << "nao encaixa" << endl;
	}

    return 0;
}
