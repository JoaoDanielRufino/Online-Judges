#include <stdio.h>

int main (){

    double valor;
    int n100, n50, n20, n10, n5, n2;
    int m100, m50, m25, m10, m5, m1;
    int valorEmCentavos;
    scanf("%lf", &valor);
 
    valorEmCentavos = valor * 100;
 
    n100 = valorEmCentavos / 10000;
    valorEmCentavos = valorEmCentavos%10000;
 
    n50 = valorEmCentavos / 5000;
    valorEmCentavos = valorEmCentavos%5000;
 
    n20 = valorEmCentavos / 2000;
    valorEmCentavos = valorEmCentavos%2000;
 
    n10 = valorEmCentavos / 1000;
    valorEmCentavos = valorEmCentavos%1000;
 
    n5 = valorEmCentavos / 500;
    valorEmCentavos = valorEmCentavos%500;
 
    n2 = valorEmCentavos / 200;
    valorEmCentavos = valorEmCentavos%200;
 
    m100 = valorEmCentavos / 100;
    valorEmCentavos = valorEmCentavos%100;
 
    m50 = valorEmCentavos / 50;
    valorEmCentavos = valorEmCentavos%50;
 
    m25 = valorEmCentavos / 25;
    valorEmCentavos = valorEmCentavos%25;
 
    m10 = valorEmCentavos / 10;
    valorEmCentavos = valorEmCentavos%10;
 
    m5 = valorEmCentavos / 5;
 
    m1 = valorEmCentavos%5;
 
 
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", m100);
    printf("%d moeda(s) de R$ 0.50\n", m50);
    printf("%d moeda(s) de R$ 0.25\n", m25);
    printf("%d moeda(s) de R$ 0.10\n", m10);
    printf("%d moeda(s) de R$ 0.05\n", m5);
    printf("%d moeda(s) de R$ 0.01\n", m1);
 
    return 0;
}
 
