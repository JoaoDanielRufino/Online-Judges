#include<stdio.h>

int main() {

	long long int x,n,i,v[61];
	
	v[0] = 0; v[1] = 1;
	for(i=2; i<=60; i++){
		v[i] = v[i-2] + v[i-1];
	}
	
	scanf("%lld", &x);
	for(i=0; i<x; i++){
		scanf("%lld", &n);
		printf("Fib(%lld) = %lld\n", n,v[n]);
	}
	
	return 0;
}
