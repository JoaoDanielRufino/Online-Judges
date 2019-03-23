#include<stdio.h>

int main(){
    
    int v[3],aux=0,i,j,x,y,z;
    scanf("%d %d %d", &v[0],&v[1],&v[2]);
    
    x=v[0]; y=v[1]; z=v[2];
    
    for(i=0; i<3; i++){
    	for(j=0; j<3; j++){
    		if(v[i] < v[j]){
    			aux = v[i];
    			v[i] = v[j];
    			v[j] = aux;
			}
		}
	}
	
	for(i=0; i<3; i++){
		printf("%d\n", v[i]);
	}
	
	printf("\n");
	
	printf("%d\n", x);
	printf("%d\n", y);	
	printf("%d\n", z);
	
    return 0;
}
