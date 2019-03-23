#include<stdio.h>
#include<math.h>

int main(){
    
    int x,y,i,count=0;
	
	scanf("%d %d", &x,&y);
	
	for(i=1; i<=y; i++){
		count++;
		printf("%d", i);
		if(count<x){
			printf(" ");
		}
		if(count==x){
			printf("\n");
			count=0;
		}
	}
	
    return 0;
}
