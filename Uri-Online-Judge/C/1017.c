#include<stdio.h>
#include<math.h>

int main(){

    int x,y,distancia=0;
	  float litros=0;
	
    scanf("%d %d", &x,&y);

	  distancia = x*y;
	  litros  =  distancia/12.0;          
				            
    printf("%.3f\n", litros);

    return 0;

}
