#include<stdio.h>

int main(){
	
	double n1,n2,media;
	
	scanf("%lf %lf",&n1, &n2);

	if(n1<=10.0 && n2<=10){
		
	  media=(n1*3.5+n2*7.5)/11;
		
	  printf("MEDIA = %.5lf\n",media);
  }
	
	return 0;
}
