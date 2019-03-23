#include<stdio.h>

int main(){
    
	int v[1000],i,n,count=0;
	
	scanf("%d", &n);
	
	v[0] = 0;
	v[1] = 1;
	
	printf("0 1 ");
	for(i=2; i<n; i++){
		count++;
		v[i] = v[i-2] + v[i-1];
		printf("%d", v[i]);
		if(count<n-2){
			printf(" ");
		}
		if(count==n-2){
			printf("\n");
		}
	}
   
	
    return 0;
}
