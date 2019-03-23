#include <stdio.h>

int main(){
    
    int x,i,j;
	
	scanf("%d", &x);
	
	i=x; j=0;
	while(j!=12){
		if(i%2==1){
			printf("%d\n", i);
		}
		i++;
		j++;
	}

    
    return 0;
}
