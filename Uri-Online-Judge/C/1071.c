#include <stdio.h>

int main(){
    
    int x,y,i,aux,impar=0;
	
	scanf("%d %d", &x,&y);
	
	if(x>y){
		aux = x;
		x = y;
		y = aux;
	}
	
	for(i=x+1; i<y; i++){
		if(i%2!=0){
			impar = impar + i;
		}
	}

    printf("%d\n", impar);
    
    return 0;
}
