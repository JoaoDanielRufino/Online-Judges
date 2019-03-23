#include<stdio.h>

int main(){
    
    int n,i,count=0;
	
	scanf("%d", &n);
	
	for(i=1; i<=(n*4); i++){
		count++;
		if(count==4){
			printf("PUM\n");
			count=1;
			i++;
		}
		if(i>(n*4)){
			break;
		}
		printf("%d ", i);
	}
	
    return 0;
}
