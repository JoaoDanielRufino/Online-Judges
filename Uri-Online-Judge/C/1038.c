#include<stdio.h>

main(){
     
	int x,y;
	float t;
	
	scanf("%d %d", &x,&y);
	
	switch(x){
		
		case 1: t = 4.00*y; break;
		case 2: t = 4.50*y; break;
		case 3: t = 5.00*y; break;
		case 4: t = 2.00*y; break;
		case 5: t = 1.50*y; break;
	}

	printf("Total: R$ %.2f\n", t);
	
    return 0;
}
