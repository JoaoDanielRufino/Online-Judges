#include<stdio.h>
#include<stdlib.h>

int main(){

	int i,x,y,aux;
	scanf("%d %d", &x,&y);
	
	if(x>y){
		aux = x;
		x = y;
		y = aux;
	}
	
	if(x==y){
		printf("0\n");
	}
	
	else{
		for(i=x+1; i<y; i++){
			if(i%5==2 || i%5==3){
				printf("%d\n", i);
			}	
		}
	}

  return 0;

}
