#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float x,y;
	scanf("%f", &x);
	
	if(x>=0 && x<=400.00){
		y = x+x*0.15;
		printf("Novo salario: %.2f\n", y);
		printf("Reajuste ganho: %.2f\n", x*0.15);
		puts("Em percentual: 15 %");
	}
	
	if(x>400.00 && x<=800.00){
		y = x+x*0.12;
		printf("Novo salario: %.2f\n", y);
		printf("Reajuste ganho: %.2f\n", x*0.12);
		puts("Em percentual: 12 %");
	}
	
	if(x>800.00 && x<=1200.00){
		y = x+x*0.10;
		printf("Novo salario: %.2f\n", y);
		printf("Reajuste ganho: %.2f\n", x*0.10);
		puts("Em percentual: 10 %");
	}
	
	if(x>1200.00 && x<=2000.00){
		y = x+x*0.07;
		printf("Novo salario: %.2f\n", y);
		printf("Reajuste ganho: %.2f\n", x*0.07);
		puts("Em percentual: 7 %");
	}
	
	if(x>2000.00){
		y = x+x*0.04;
		printf("Novo salario: %.2f\n", y);
		printf("Reajuste ganho: %.2f\n", x*0.04);
		puts("Em percentual: 4 %");
	}

    return 0;	
	
}
