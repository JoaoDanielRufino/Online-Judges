#include<stdio.h>
#include<stdlib.h>

int main(){

	int x,y;

	while(1){
		scanf("%d %d", &x,&y);
		
		if(x>y){
			printf("Decrescente\n");
		}
		if(x<y){
			printf("Crescente\n");
		}
		if(x==y){
			break;
		}
	}


	
  return 0;

}
