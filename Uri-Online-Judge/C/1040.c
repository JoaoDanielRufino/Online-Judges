#include<stdio.h>

main(){
     
	float n1,n2,n3,n4,ne,media,mediaex;
	scanf("%f %f %f %f", &n1,&n2,&n3,&n4);
	
	media = ((n1*2)+(n2*3)+(n3*4)+n4)/10;
	
	if(media>=7.0){
		printf("Media: %.1f\n", media);
		printf("Aluno aprovado.\n");
	}
	
	else if(media<5.0){
		printf("Media: %.1f\n", media);
		printf("Aluno reprovado.\n");
	}
	
	else if(media>=5.0 && media<=6.9){
		printf("Media: %.1f\n", media);
		printf("Aluno em exame.\n");
		
		scanf("%f", &ne);
		printf("Nota do exame: %.1f\n", ne);
		
		mediaex = (media+ne)/2;
		
		if(mediaex>=5.0){
			printf("Aluno aprovado.\n");
			printf("Media final: %.1f\n", mediaex);
		}	
		
		else{
			printf("Aluno reprovado.\n");
			printf("Media final: %.1f\n", mediaex);
		}
	}
	
    return 0;
}
