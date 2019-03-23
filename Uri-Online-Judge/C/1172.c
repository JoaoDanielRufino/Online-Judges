#include<stdio.h>

int main(){
	
	int v[10],n,i;
	
	for(i=0; i<10; i++){
		scanf("%d", &n);
		
		if(n<=0){
			v[i] = 1;
		}
		else{
			v[i] = n;
		}
		printf("X[%d] = %d\n", i,v[i]);
	}
	
	return 0;
}
