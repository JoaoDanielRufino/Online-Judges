#include<stdio.h>
#include<math.h>

int main(){

	int n,i,quad,cub;
	
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		quad = pow(i,2);
		cub = pow(i,3);
		printf("%d %d %d\n", i,quad,cub);
	}

  return 0;

}
