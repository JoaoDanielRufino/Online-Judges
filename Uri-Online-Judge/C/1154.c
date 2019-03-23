#include<stdio.h>

int main(){
	
	int n,count=0;
	float media=0.0;
	
	while(1){
		scanf("%d", &n);
		if(n>=0){
			media += n;
			count++;
		}
		else if(n<0){
			break;
		}
	}
	
	media  = media/count;
	
	printf("%.2f\n", media);
	
	return 0;
}
