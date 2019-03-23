#include <stdio.h>

int main(){

	int n;
	float x,y,media;

	while(1){
		while(1){
			scanf("%f", &x);
			if(x>=0.0 && x<=10.0)
				break;
			else
				printf("nota invalida\n");
		}
		while(1){
			scanf("%f", &y);
			if(y>=0.0 && y<=10.0)
				break;
			else
				printf("nota invalida\n");
		}
		
		media = (x+y)/2;
		printf("media = %.2f\n", media);
		
		while(1){
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &n);
			if(n==1 || n==2)
				break;
		}
		if(n==2)
			break;
	}
	
	return 0;
	
}
