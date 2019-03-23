#include<stdio.h>

int main() {

	int n,i,j;
	double v[12][12],media=0.0,soma=0.0;
	char op[2];
	
	scanf("%d", &n);
	scanf("%s", &op);
	
	for(i=0; i<12; i++){
		for(j=0; j<12; j++){
			scanf("%lf", &v[i][j]);
		}
	}
	
	if(op[0]=='S'){
		for(j=0; j<12; j++){
			soma += v[n][j];
		}
		printf("%.1lf\n", soma);
	}
	
	if(op[0]=='M'){
		for(j=0; j<12; j++){
			media += v[n][j];
		}
		media = media/12.0;
		printf("%.1lf\n", media);
	}
	
	return 0;
}
