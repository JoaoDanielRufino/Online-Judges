#include<stdio.h>

int main(){
	
	int n,x,i,j,count;
	
	scanf("%d", &x);
	
	for(j=0; j<x; j++){
		scanf("%d", &n);
		
		count=0;
		for(i=2; i<n; i++){
			if(n%i==0){
				count++;
			}
		}
		
		if(count==0){
			printf("%d eh primo\n", n);
		}
		else{
			printf("%d nao eh primo\n", n);
		}	
	
	}
	return 0;
}
