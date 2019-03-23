#include<stdio.h>
#include<stdlib.h>

int main(){

	int x,y,i,soma=0;
	scanf("%d %d", &x,&y);
	
	if(x>y){
		for(i=y; i<=x; i++){
			if(i%13!=0){
				soma += i;
			}
		}
		printf("%d\n", soma);
	}

	if(x<y){
		for(i=x; i<=y; i++){
			if(i%13!=0){
				soma += i;
			}
		}
		printf("%d\n", soma);
	}
	
	if(x==y){
		printf("0\n");
	}
	
	
  return 0;

}
