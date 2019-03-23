#include<stdio.h>

long long int invert(long long int n){
	if(n==0)
		return n;
	else{
		printf("%lld", n%10);
		invert(n/10);	
	} 
}

int main(){
	
	long long int n;
	
	scanf("%lld", &n);
	
	invert(n);
	printf("\n");
	
	return 0;
}
