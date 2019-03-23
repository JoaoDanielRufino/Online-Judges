#include<stdio.h>
#include<stdlib.h>

int main(){

	int x,y;
	
	while(1){
		scanf("%d %d", &x,&y);
	
		if(x>0 && y>0){
			printf("primeiro\n");
		}
	
		if(x<0 && y>0){
			printf("segundo\n");
		}
	
		if(x<0 && y<0){
			printf("terceiro\n");
		}
	
		if(x>0 && y<0){
			printf("quarto\n");
		}
	
		if(x==0 || y==0){
			break;
		}
	}

  return 0;

}
