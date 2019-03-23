#include<stdio.h>

int main(){
	
	int i;
	float v[100],n;
	
	for(i=0; i<100; i++){
		scanf("%f", &n);
		
		if(n<=10.0){
			v[i] = n;
		}
		else{
			continue;
		}
		
		printf("A[%d] = %.1f\n", i,v[i]);
	}
	
	return 0;
}
