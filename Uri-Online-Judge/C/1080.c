#include<stdio.h>

int main(){
    
    int v[100],i,maior=0,pos;
	
	
	for(i=1; i<=100; i++){
		scanf("%d", &v[i]);
	}
	
	for(i=1; i<=100; i++){
		if(v[i] > maior){
			maior = v[i];
			pos = i;
		}
	}
	
	printf("%d\n", maior);
	printf("%d\n", pos);
	
    return 0;
}
