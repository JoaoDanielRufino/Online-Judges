#include <bits/stdc++.h>

using namespace std;

long long int tree[10000000];
long long int lazy[10000000];

void update(long long int index, long long int left, long long int right, long long int us, long long int ue, long long int diff){
	if(lazy[index] != 0){
		tree[index] += (right - left+1)*lazy[index];
		if(left != right){
			lazy[index*2+1] += lazy[index];
            lazy[index*2+2] += lazy[index];
		}
		lazy[index] = 0LL;
	}

	if(left > right || left > ue || right < us)
		return;

	if(left >= us && right <= ue){
		tree[index] += (right - left+1)*diff;
		if(left != right){
			lazy[index*2+1] += diff;
            lazy[index*2+2] += diff;
		}
		return;
	}

	long long int mid = (left + right)/2;
	update(index*2+1, left, mid, us, ue, diff);
	update(index*2+2, mid+1, right, us, ue, diff);

	tree[index] = tree[index*2+1] + tree[index*2+2];
}

void update_range(long long int n, long long int us, long long int ue, long long int diff){
	update(0, 0, n-1, us, ue, diff);
}

long long int get_sum(long long int left, long long int right, long long int qs, long long int qe, long long int index){
	if(lazy[index] != 0){
		tree[index] += (right - left+1)*lazy[index];
		if(left != right){
			lazy[index*2+1] += lazy[index];
            lazy[index*2+2] += lazy[index];
		}
		lazy[index] = 0LL;
	}

	if(left > right || left > qe || right < qs)
		return 0LL;

	if(left >= qs && right <= qe)
		return tree[index];

	long long int mid = (left + right)/2;
	return get_sum(left, mid, qs, qe, index*2+1) +
		   get_sum(mid+1, right, qs, qe, index*2+2);
}

long long int sum(long long int n, long long int qs, long long int qe){
	return get_sum(0, n-1, qs, qe, 0);
}

void contruct(long long int *vet, long long int left, long long int right, long long int index){
	if(left > right)
		return;

	if(left == right){
		tree[index] = vet[left];
		return;
	}

	long long int mid = (left + right)/2;
	contruct(vet, left, mid, index*2+1);
	contruct(vet, mid+1, right, index*2+2);

	tree[index] = tree[index*2+1] + tree[index*2+2];
}

void initiate_st(long long int *vet, long long int n){
	contruct(vet, 0, n-1, 0);
}

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    long long int t,n,c,p,q,v,op;

	cin >> t;

	while(t--){
		cin >> n >> c;
		long long int *vet = new long long int[n];
		for(int i = 0; i < n; i++)
			vet[i] = 0LL;
		for(long long int i = 0; i < 10000000; i++)
			tree[i] = lazy[i] = 0LL;
		initiate_st(vet, n);

		while(c--){
			cin >> op;
			if(!op){
				cin >> p >> q >> v;
				update_range(n, p-1, q-1, v);
			}
			else if(op == 1){
				cin >> p >> q;
				cout << sum(n, p-1, q-1) << endl;
			}
		}
	}
    return 0;
}
