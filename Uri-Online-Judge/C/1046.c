#include<stdio.h>
#include<stdio.h>

int main(){
	
	int x,y,i,j;
	scanf("%d %d", &x,&y);
	 
	if(x==y){
  		printf("O JOGO DUROU 24 HORA(S)\n");
	}
	
	if(x<y){
		printf("O JOGO DUROU %d HORA(S)\n", abs(x-y));
	}
	
	if(x>y){
		i = x;
		while(i!=24){
			i++;
		}
		printf("O JOGO DUROU %d HORA(S)\n", abs((i+y)-x));
	}
	  
   
    return 0;
}
