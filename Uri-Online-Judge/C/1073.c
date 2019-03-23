#include <stdio.h>

int main(){
    
    int n,i,quad;;
    
    scanf("%d", &n);
    
   	for(i=2; i<=n; i++){
   		if(i%2==0){
   			quad = i*i;
   			printf("%d^2 = %d\n", i,quad);
		   }
	   }
   
   
    return 0;
}
