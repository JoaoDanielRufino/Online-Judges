#include <bits/stdc++.h>

using namespace std;

int sum(int *tree, int index){
	int sum = 0;
	index++;

	while(index > 0){
		sum += tree[index];
		index = index - (index & -index);
	}
	return sum;
}

void update(int *tree, int n, int index, int data){
	index++;
	while(index <= n){
		tree[index] += data;
		index = index + (index & -index);
	}
}

int* construct(vector<int> vet, int n){
	int *tree = new int[n+1];

	for(int i = 1; i <= n; i++)
		tree[i] = 0;

	for(int i = 0; i < n; i++)
		update(tree, n, i, vet[i]);

	return tree;
}

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,a,*tree;
	char op;
	vector<int> vet;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> a;
		vet.push_back(a);
	}

	tree = construct(vet, n);

	while(cin >> op >> a){
		if(op == 'a')
			update(tree, n, a-1, -vet[a-1]);
		else if(op == '?')
			cout << sum(tree, a-2) << endl;
	}

    return 0;
}
