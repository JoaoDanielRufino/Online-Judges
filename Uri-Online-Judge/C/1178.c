#include<stdio.h>

int main() {

	int i;
	double n,v[100];
	
	scanf("%lf", &n);
	
	v[0] = n;
	printf("N[0] = %.4lf\n", n);
	for(i=1; i<100; i++){
		v[i] = v[i-1]/2.0;
		printf("N[%d] = %.4lf\n", i,v[i]);
	}
	
	return 0;
}
