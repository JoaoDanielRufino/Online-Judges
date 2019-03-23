#include<stdio.h>
#include<stdlib.h>

int main(){

	int v,i,n,total=0,tc=0,tr=0,ts=0;
	float pc,pr,ps;
	char s;

	scanf("%d", &n);

	for(i=0; i<n; i++){
	    scanf("%d %c", &v,&s);

	    total  = total + v;

        if(s=='C'){
	      tc = tc + v;
	    }

	    if(s=='R'){
	      tr = tr + v;
	    }

	    if(s=='S'){
 	      ts = ts + v;
	    }

	}


	pc = (tc*100.0)/total;
	pr = (tr*100.0)/total;
	ps = (ts*100.0)/total;


	printf("Total: %d cobaias\n", total);
	printf("Total de coelhos: %d\n", tc);
	printf("Total de ratos: %d\n", tr);
	printf("Total de sapos: %d\n", ts);
	printf("Percentual de coelhos: %.2f %%\n", pc);
	printf("Percentual de ratos: %.2f %%\n", pr);
	printf("Percentual de sapos: %.2f %%\n", ps);



  return 0;

}
