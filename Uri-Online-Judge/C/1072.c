#include <stdio.h>

int main(){
    
    int n,v[10000],i,in=0,out=0;
    
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
    	scanf("%d", &v[i]);
    	if(v[i]>=10 && v[i]<=20){
    		in++;
		}
		else{
			out++;
		}
	}
	
	printf("%d in\n", in);
	printf("%d out\n", out);
    
    return 0;
}
