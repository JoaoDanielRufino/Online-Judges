#include<stdio.h>

int main() {

	int x,n,i,pos,vet=100000,v[10000];
	
	scanf("%d", &x);
	
	for(i=0; i<x; i++){
		scanf("%d", &v[i]);
	}
	for(i=0; i<x; i++){
		if(vet > v[i]){
			vet = v[i];
			pos  = i;
		}
	}
	
	printf("Menor valor: %d\n", vet);
	printf("Posicao: %d\n", pos);
	
	return 0;
}
