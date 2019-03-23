#include<stdio.h>

int main() {

	int n,x,y,i,j,k,soma;
	
	scanf("%d", &n);

	for(i=0; i<n; i++){
		scanf("%d %d", &x,&y);
		
		soma=0; k=0; j=x;
		while(k<y){
			if(j%2!=0){
				soma += j;
				k++;
			}
			j++;
		}
		printf("%d\n", soma);
	}

	
	return 0;
}
