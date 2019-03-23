#include <stdio.h>

int main(){

	int a,b,cresc,ca,cb,n,i,tempo;
	double g1,g2;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%d %d %lf %lf", &a,&b,&g1,&g2);

		tempo=0;
		while(1){
			ca = (int) a*g1/100;
			a += ca;

			cb = (int) b*g2/100;
			b += cb;

			tempo++;
			if(a>b || tempo>100)
				break;
		}
		
		if(tempo<=100)
			printf("%d anos.\n", tempo);
		if(tempo>100)
			printf("Mais de 1 seculo.\n");
	}
	
	return 0;
	
}
