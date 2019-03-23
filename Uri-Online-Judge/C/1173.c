#include<stdio.h>

int main(){
    
	int v[10],i,n;
	
	scanf("%d", &n);
	
	v[0] = n;
	printf("N[0] = %d\n", v[0]);
	for(i=1; i<10; i++){
		v[i] = v[i-1]*2;
		printf("N[%d] = %d\n", i,v[i]);
	}
   
	
    return 0;
}
