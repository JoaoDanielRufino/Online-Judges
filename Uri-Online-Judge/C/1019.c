#include<stdio.h>

main(){
	
	int h=0,m=0,s=0;
	scanf("%d", &s);
	
	m = (s/60)%60;
	h  = (s/60)/60;
	s = s%60;
	
	printf("%d:%d:%d\n", h,m,s);
  
	return 0;
	
}
