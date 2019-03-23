#include<stdio.h>

int main(){
	
	int n,i,j,k[70][70];
	
	while(scanf("%d", &n) !=EOF){
	
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				if(i==j && i+j!=n-1)
					k[i][j] = 1;
				if(i+j==n-1)
					k[i][j] = 2;
				if(i!=j && (i+j<n-1 || i+j>=n))
					k[i][j] = 3;
				
				printf("%d", k[i][j]);	
			}
			printf("\n");
		}
	}

	return 0;
}
