#include<stdio.h>

int main() {

	int i,v[20];

	for(i=19; i>=0; i--){
		scanf("%d", &v[i]);
	}
	
	for(i=0; i<20; i++){
		printf("N[%d] = %d\n", i,v[i]);
	}
	

	return 0;
}
