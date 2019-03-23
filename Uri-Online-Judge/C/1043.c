#include<stdio.h>
#include<stdlib.h>

int main(){
    
    float x,y,z,p,a;
    scanf("%f %f %f", &x,&y,&z);
    
    if(x<(y+z) && x>abs(y-z)){
    	p = x+y+z;
    	printf("Perimetro = %.1f\n", p);
	}
	
	else{
		a = ((x+y)*z)/2;
		printf("Area = %.1f\n", a);
	}
    return 0;
}
