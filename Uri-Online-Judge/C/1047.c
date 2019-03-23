#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int h1,m1,h2,m2,mf,i;
	
	scanf("%d %d %d %d", &h1,&m1,&h2,&m2);
	
	if(h1==h2 && m1==m2)
	{
		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	}
	
	if(h1<h2 && m1<m2)
	{
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h2-h1,m2-m1);
	}
	
	if(h1<h2 && m1>m2)
	{	
		mf = 60-(m1-m2);
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (h2-h1)-1,mf);
	}
	
	if(h1>h2 && m1>m2)
	{
    i=h1;
    while(i!=24)
	{
    	i++;
    }
	
    mf = 60-abs(m1-m2);
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", abs(((i+h2)-h1)-1),mf);
    }
    
    if(h1>h2 && m1<m2)
    {
    	i=h1;
    	while(i!=24)
    	{
    		i++;
    	}
    	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", abs((i+h2)-h1), m2-m1);
    }
    
    if(h1>h2 && m1==m2)
    {
    	i=h1;
    	while(i!=24)
		{
    		i++;
    	}
    	printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n", abs((i+h2)-h1));
    }
    
    if(h1<h2 && m1==m2)
    {
    	printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n", h2-h1);
    }
    
    if(h1==h2 && m1<m2)
    {
    	printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n", m2-m1);
    }
    
     if(h1==h2 && m1>m2)
    {
    	mf  = 60-abs(m1-m2);
    	printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)\n", mf);
    }
    
    return 0;	
	
}
