#include<stdio.h>

int main(){
	
	int x,y,i,soma=0;
	
	scanf("%d %d", &x,&y);
	
	while(y<=0){
		scanf("%d", &y);
	}
	
	for(i=1; i<=y; i++){
		soma += x;
		x++;
	}
	printf("%d\n", soma);

	return 0;
}
