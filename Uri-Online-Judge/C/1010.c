#include<stdio.h>

int main(){
	
	
	int x,y,w,a;
	float b,z,m1,m2,total;
	
	scanf("%d %d %f", &x, &w, &z);
	scanf("%d %d %f", &y, &a, &b);
	
	m1=w*z;
	m2=a*b;
	total=m1+m2;

	printf("VALOR A PAGAR: R$ %.2f\n", total);

	return 0;
}
