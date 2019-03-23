#include<stdio.h>
#include<string.h>

int main(){
    
    int n,i,j,aux,k;
    char v[300];
    
    scanf("%d ", &n);
    
    for(k=0; k<n; k++){
    	gets(v);
    	
    	for(i=0; i<strlen(v); i++){
    		if((v[i]>=65 && v[i]<=90) || (v[i]>=97 && v[i]<=122)){
    			v[i] = v[i] + 3;
    		}
		}
		
		for(i=0,j=strlen(v)-1; i<j; i++,j--){
			aux = v[i];
			v[i] = v[j];
			v[j] = aux;
		}
	
		for(i=strlen(v)/2; i<strlen(v); i++){
			v[i] = v[i] - 1;
		}
		
		printf("%s\n", v);
	}

    return 0;
}
