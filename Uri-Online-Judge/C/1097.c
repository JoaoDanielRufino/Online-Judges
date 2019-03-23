#include<stdio.h>

int main(){
    
	int i,j,count=0;
	
	i=1; j=7;
	while(i!=11){
		printf("I=%d J=%d\n", i,j); j--;
		printf("I=%d J=%d\n", i,j);	j--;
		printf("I=%d J=%d\n", i,j);	j--;
		i += 2;
		j += 5; 
	}
   
	
    return 0;
}
