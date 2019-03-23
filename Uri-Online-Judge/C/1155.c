#include<stdio.h>

int main(){
	
	float s=0.0,i;
	
	for(i=2.0; i<=100.0; i++){
		s = s + 1/i;
	}
	
	s += 1.0;
	
	printf("%.2f\n", s);
	
	return 0;
}
