#include <stdio.h>

int main(){
    
    int i,positivos=0;
    float v[6],media;
    
	for(i=0; i<6; i++){
		scanf("%f", &v[i]);
		if(v[i]>0){
			positivos++;
			media  = media + v[i];
		}
	}  
	
	printf("%d valores positivos\n", positivos);
    printf("%.1f\n", media/positivos);
    
    return 0;
}
