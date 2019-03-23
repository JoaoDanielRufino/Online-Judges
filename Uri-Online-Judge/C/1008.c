#include<stdio.h>

int main(){
	
	
	int n,h;
	float ht,salario;
	
	scanf("%d %d %f",&n, &h, &ht);
	
	salario=h*ht;
	
	printf("NUMBER = %d\n", n);
	printf("SALARY = U$ %.2f\n", salario);
	
	return 0;
}
