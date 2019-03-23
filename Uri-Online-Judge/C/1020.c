#include<stdio.h>

main(){
	
	int a=0,m=0,d=0;
	scanf("%d", &d);
	
	a = d/365;
	m = d-(a*365);
	d = m%30;

	printf("%d ano(s)\n", a);
	printf("%d mes(es)\n", m/30);
	printf("%d dia(s)\n", d);

	
	return 0;
	
}
