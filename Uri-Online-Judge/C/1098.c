#include<stdio.h>

int main(){
    
    int j;
	float i,v[3];
	
	i=0.0; v[0]=1.0 ;v[1]=2.0; v[2]=3.0;
	while(i<2.2){
		for(j=0; j<3; j++){
			if(i==0.0 || i==1.0 || i>1.9)
				printf("I=%.0f J=%.0f\n", i,v[j]);
				
			else	
				printf("I=%.1f J=%.1f\n", i,v[j]);
			v[j]+=0.2; 
		}
		i+=0.2;	
	}
	
    return 0;
}
