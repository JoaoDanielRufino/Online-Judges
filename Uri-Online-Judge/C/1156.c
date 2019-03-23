#include<stdio.h>

int main(){
	
	float s=0.0,i,j;
	
	for(i=3.0,j=2.0; i<=39.0;){
		s = s + i/j;	
		i += 2.0;		
		j = j*2.0;		
	}
	
	s += 1.0;
	
	printf("%.2f\n", s);
	
	return 0;
}
