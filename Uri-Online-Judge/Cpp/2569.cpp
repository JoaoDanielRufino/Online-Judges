#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
	int a,b;
	bool flag = false;
    char op;
	string str1,str2,aux;
	stringstream ss1,ss2,total;

	cin >> str1 >> op >> str2;

	for(int i = 0; i < str1.size(); i++){
		if(str1[i] == '7')
			str1[i] = '0';
	}

	for(int i = 0; i < str2.size(); i++){
		if(str2[i] == '7')
			str2[i] = '0';
	}

	ss1 << str1;
	ss2 << str2;

	ss1 >> a;
	ss2 >> b;

	if(op == '+')
		total << a+b;
	else
		total << a*b;

	total >> aux;
	for(int i = 0; i < aux.size(); i++){
		if(aux[i] == '7' && flag)
			cout << '0';
		else if(aux[i] != '7'){
			cout << aux[i];
			flag = true;
		}
	}

	if(!flag)
		cout << '0';

	cout << endl;

    return 0;
}
