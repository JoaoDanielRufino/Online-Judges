#include<stdio.h>

int main(){
	
	double n1,n2,n3,media;
	
	scanf("%lf %lf %lf",&n1, &n2, &n3);

	if(n1<=10.0 && n2<=10 && n3<=10){
	
  	media=(n1*2 + n2*3 + n3*5)/10;
		
	printf("MEDIA = %.1lf\n",media);
  }
	
	return 0;
}
