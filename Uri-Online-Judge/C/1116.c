#include<stdio.h>
#include<stdlib.h>

int main(){

	int x,y,n,i;
	float div=0.0;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%d %d", &x,&y);
		if(y==0){
			printf("divisao impossivel\n");
		}
		else{
			div = (float)x/y;
			printf("%.1f\n", div);
		}
		div = 0;
	}
	
  return 0;

}
