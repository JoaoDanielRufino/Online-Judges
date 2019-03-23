#include<stdio.h>

int main(){
    
    float x,y,media;
    
    scanf("%f", &x);
    while(1){
    	if(x<0 || x>10){
    		printf("nota invalida\n");
    		scanf("%f", &x);
		}
		else{
			break;
		}
	}
	
	scanf("%f", &y);
	while(1){
    	if(y<0 || y>10){
    		printf("nota invalida\n");
    		scanf("%f", &y);
		}
		else{
			break;
		}
	}
	
    media = (x+y)/2;
    printf("media = %.2f\n", media);
	
    return 0;
}
