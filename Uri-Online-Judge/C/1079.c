#include<stdio.h>

int main(){
    
    int n,i;
    float x[1000],y[1000],z[1000],media[1000];

	scanf("%d", &n);
		
	for(i=0; i<n; i++){
		scanf("%f %f %f", &x[i],&y[i],&z[i]);
	}
	
	for(i=0; i<n; i++){
		media[i] = (x[i]*2+y[i]*3+z[i]*5)/10;
		printf("%.1f\n", media[i]);
	}
	
    return 0;
}
