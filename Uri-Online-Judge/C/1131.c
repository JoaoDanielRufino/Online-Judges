#include <stdio.h>

int main(){

	int n,gremio,inter,vinter=0,vgremio=0,empate=0,total=0;
	
	while(1){
		scanf("%d %d", &inter,&gremio);
		if(inter==gremio)
			empate++;
		if(inter>gremio)
			vinter++;
		if(inter<gremio)
			vgremio++;
		total++;
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &n);
		if(n==2)
			break;
	}
	
	printf("%d grenais\n", total);
	printf("Inter:%d\n", vinter);
	printf("Gremio:%d\n", vgremio);
	printf("Empates:%d\n", empate);
	if(vinter>vgremio)
		printf("Inter venceu mais\n");
	if(vinter<vgremio)
		printf("Gremio venceu mais\n");
	if(vinter==vgremio)
		printf("Nao houve vencedor\n");
	
	return 0;
	
}
