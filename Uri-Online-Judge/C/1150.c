#include <stdio.h>

int main(){

	int x,z,soma=0,count=0;

	scanf("%d", &x);

	while(1){
		scanf("%d", &z);
		if(z>x)
			break;
	}
	
	while(1){
		if(soma>=z+1)
			break;
		soma += x;
		x++;
		count++;
	}

	printf("%d\n", count);

	return 0;
	
}
