#include <stdio.h>

int main(){
    
    int i,pares=0,v[5];
    
	for(i=0; i<5; i++){
		scanf("%d", &v[i]);
		if(v[i]%2==0){
			pares++;
		}
	}  
	
	printf("%d valores pares\n", pares);
    
    return 0;
}
