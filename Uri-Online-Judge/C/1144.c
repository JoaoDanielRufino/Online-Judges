#include<stdio.h>
#include<math.h>

int main(){
    
    int n,i,count=0;
	
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		count=pow(i,3);
		printf("%d %d %d\n", i, (i*i), count);
		printf("%d %d %d\n", i, (i*i)+1, count+1);
	}
	
    return 0;
}
