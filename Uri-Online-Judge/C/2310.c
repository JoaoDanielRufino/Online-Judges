#include <stdio.h>

int main(){

    int n,s,b,a,s1,b1,a1,sums=0,sumb=0,suma=0,sum1s=0,sum1b=0,sum1a=0;
    float total1,total2,total3;
    char v[30];

    scanf("%d", &n);

    while(n--){
        scanf("%s", v);
        scanf("%d %d %d", &s,&b,&a);
        scanf("%d %d %d", &s1,&b1,&a1);
        sums += s;
        sumb += b;
        suma += a;
        sum1s += s1;
        sum1b += b1;
        sum1a += a1;
        total1 = (float) sum1s/sums;
        total2 = (float) sum1b/sumb;
        total3 = (float) sum1a/suma;

    }

    printf("Pontos de Saque: %.2f %%.\n", total1*100);
    printf("Pontos de Bloqueio: %.2f %%.\n", total2*100);
    printf("Pontos de Ataque: %.2f %%.\n", total3*100);

    return 0;
}
