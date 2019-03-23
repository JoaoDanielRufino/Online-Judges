#include <stdio.h>
#include <string.h>
 
main(){
    char A[50], B[50], C[50];
    scanf("%s %s %s", A, B, C);
     
    if(!strcmp(A, "vertebrado") && !strcmp(B, "ave") && !strcmp(C, "carnivoro"))    printf("aguia\n");
    if(!strcmp(A, "vertebrado") && !strcmp(B, "ave") && !strcmp(C, "onivoro"))  printf("pomba\n");
    if(!strcmp(A, "vertebrado") && !strcmp(B, "mamifero") && !strcmp(C, "onivoro")) printf("homem\n");
    if(!strcmp(A, "vertebrado") && !strcmp(B, "mamifero") && !strcmp(C, "herbivoro"))   printf("vaca\n");
    if(!strcmp(A, "invertebrado") && !strcmp(B, "inseto") && !strcmp(C, "hematofago"))  printf("pulga\n");
    if(!strcmp(A, "invertebrado") && !strcmp(B, "inseto") && !strcmp(C, "herbivoro"))   printf("lagarta\n");
    if(!strcmp(A, "invertebrado") && !strcmp(B, "anelideo") && !strcmp(C, "hematofago"))    printf("sanguessuga\n");
    if(!strcmp(A, "invertebrado") && !strcmp(B, "anelideo") && !strcmp(C, "onivoro"))   printf("minhoca\n");
    
    return 0;
}
