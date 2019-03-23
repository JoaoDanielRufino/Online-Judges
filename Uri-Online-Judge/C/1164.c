#include<stdio.h>

int main(){
	
	int n,i,j,x,soma;
	
	scanf("%d", &x);
	
	for(j=0; j<x; j++){
		scanf("%d", &n);
		
		soma=0;
		for(i=1; i<n; i++){
			if(n%i==0){
				soma += i;
			}
		}
		
		if(soma==n){
			printf("%d eh perfeito\n", n);
		}
		else{
			printf("%d nao eh perfeito\n", n);
		}	
	
	}
	return 0;
}
