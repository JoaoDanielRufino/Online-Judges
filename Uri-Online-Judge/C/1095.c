#include<stdio.h>
#include<stdlib.h>

int main(){

	int i,j;
	
	i=1; j=60;
	while(1){
		printf("I=%d J=%d\n", i,j);
		if(j==0){
			break;
		}
		j -= 5;
		i += 3;
	}

  return 0;

}
