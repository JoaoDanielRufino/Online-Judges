#include <stdio.h>

int main(){
    
    int n,i,v[10000];
    
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
    	scanf("%d", &v[i]);
	}
	
	for(i=0; i<n; i++){
		if(v[i]==0){
    		printf("NULL\n");
		}
		if(v[i]>0 && v[i]%2==0){
			printf("EVEN POSITIVE\n");
		}
		if(v[i]<0 && v[i]%2==0){
			printf("EVEN NEGATIVE\n");
		}
		if(v[i]>0 && v[i]%2!=0){
			printf("ODD POSITIVE\n");
		}
		if(v[i]<0 && v[i]%2!=0){
			printf("ODD NEGATIVE\n");
		}
	}
   
   
   
    return 0;
}
