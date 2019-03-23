#include<stdio.h>

int main(){
	
	
	char c[30];
	double s,v,comissao,st;
	
	scanf("%s %lf %lf", &c, &s, &v);
	
	comissao=0.15*v;
	
	st=comissao+s;
	
	printf("TOTAL = R$ %.2lf\n", st);

	return 0;
}
