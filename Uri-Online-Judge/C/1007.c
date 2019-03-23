#include<stdio.h>

int main(){
	
	int n1,n2,n3,n4,diferenca;
	
	scanf("%d %d %d %d",&n1, &n2, &n3,&n4);
	
	diferenca = (n1*n2) - (n3*n4); 
		
	printf("DIFERENCA = %d\n", diferenca);
		
	return 0;
}
