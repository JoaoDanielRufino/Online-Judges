#include<stdio.h>

int main() {

	int x,i,j,soma;
	
	while(1){
		scanf("%d", &x);
		if(x==0) break;
		
		j=0; soma=0; i=x;
		while(j<5){
			if(i%2==0){
				soma += i;
				j++;
			}
			i++;
		}
		printf("%d\n", soma);
	}
	
	
	return 0;
}
