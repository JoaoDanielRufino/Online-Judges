#include<stdio.h>
#include<math.h>

int main(){
   int i,j;
   float v[3],aux;
   
   scanf("%f %f %f", &v[0], &v[1], &v[2]);
   
   for(i=0; i<3; i++){
   	for(j=i+1; j<3; j++){
   		if(v[i] < v[j]){
   			aux  = v[i];
   			v[i] = v[j];
   			v[j] = aux;
		   }
	   }
   }
   
   if(v[0]>=(v[1]+v[2])){
   	printf("NAO FORMA TRIANGULO\n");
   	return 0;
   }
   
   if(pow(v[0],2)==pow(v[1],2)+pow(v[2],2)){
   	printf("TRIANGULO RETANGULO\n");
   }
   
   if(pow(v[0],2)>pow(v[1],2)+pow(v[2],2)){
   	printf("TRIANGULO OBTUSANGULO\n");
   }
   
   if(pow(v[0],2)<pow(v[1],2)+pow(v[2],2)){
   	printf("TRIANGULO ACUTANGULO\n");
   }
   
   if(v[0]==v[1] && v[0]==v[2] && v[1]==v[2]){
   	printf("TRIANGULO EQUILATERO\n");
   }
   
   if((v[0]==v[1] || v[0]==v[2] || v[1]==v[2]) && (v[0]!=v[1] || v[0]!=v[2] || v[1]!=v[2])){
   	printf("TRIANGULO ISOSCELES\n");
   }
   
    return 0;
}
