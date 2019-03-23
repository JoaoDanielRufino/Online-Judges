#include<stdlib.h>

int main(){

	int x,y,i,j,n,aux,soma=0;

	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%d %d", &x,&y);
		if(x<y){
			for(j=x+1; j<y; j++){
				if(j%2!=0){
					soma += j;
				}
			}
			if(soma==0){
					printf("0\n");
				}
			else {
				printf("%d\n", soma);
			}
		}
		
		if(x>y){
			for(j=y+1; j<x; j++){
				if(j%2!=0){
					soma += j;
				}	
			}
			if(soma==0){
					printf("0\n");
				}
			else {
				printf("%d\n", soma);
			}
		}
		soma  = 0;
		
		if(x==y){
			printf("0\n");
		}
	}
	

	
  return 0;

}
