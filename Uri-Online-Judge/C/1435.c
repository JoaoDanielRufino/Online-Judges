#include<stdio.h>

int main(){
    
	int n,i,j,x,z,k,v[101][101];

	while(1){
		scanf("%d", &n);
		
		if(n==0) break;
		
		x=0;z=n;k=1;
		while(1){
			for(i=x; i<z; i++){
				for(j=x; j<z; j++){
					if(i==x || i==z-1 || j==x || j==z-1)
						v[i][j] = k;
				}
			}
			if(x==n/2) break;
			x++; z--; k++;
		}
		
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				if(j==n-1)
					printf("%3d", v[i][j]);
				else
					printf("%3d ", v[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
	
	
    return 0;
}
