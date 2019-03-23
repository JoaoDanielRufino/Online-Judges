#include<stdio.h>

int main() {

	int n,i,j,v[1000];
	
	scanf("%d", &n);
	
	j=0;
	for(i=0; i<1000; i++){
		v[i] = j;
		j++;
		if(j==n) j=0;
		printf("N[%d] = %d\n", i,v[i]);
	}
	
	return 0;
}
