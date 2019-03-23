#include <stdio.h>

int main(){
    
    int i,positivos=0;
    float	v[6];
    
	for(i=0; i<6; i++){
		scanf("%f", &v[i]);
		if(v[i]>0){
			positivos++;
		}
	}  
	
	printf("%d valores positivos\n", positivos);
    
    return 0;
}
