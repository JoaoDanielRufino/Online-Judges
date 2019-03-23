#include<stdio.h>

int main() {

	float n,imp=0.0;

	scanf("%f", &n);
	
	if(n>=0.00 && n<=2000.00)
		printf("Isento\n");
		
	if(n>=2000.01 && n<=3000.00){
		n = n - 2000.00;
		imp = n*0.08;
		printf("R$ %.2f\n", imp);
	}
	
	if(n>=3000.01 && n<=4500.00){
		imp = 1000.00*0.08;
		n = n - 3000.00;
		imp = imp + (n*0.18);
		printf("R$ %.2f\n", imp);
	}
	
	if(n>4500.00){
		imp = 1000.00*0.08;
		imp = imp + (1500.00*0.18);
		n = n - 4500.00;
		imp = imp + (n*0.28);
		printf("R$ %.2f\n", imp);
	}

	return 0;
}
