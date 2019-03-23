#include<stdio.h>
#include<stdlib.h>

int main(){

	int i,j;
	
	i=1; j=7;
	while(1){
		printf("I=%d J=%d\n", i,j);
		j--;
		if(j==4){
			i += 2;
			j=7;
		}
		if(i==11){
			break;
		}
	}

  return 0;

}
