#include <stdio.h>

int main(){

    int n,i,j,k,count,v[100000];

    j=1; v[0]=0;
    while(scanf("%d", &n)!=EOF){
        if(n==0){
            printf("Caso %d: 1 numero\n0\n\n", j);
            j++;
        }

        else{
            count=1; k=1;
            while(count!=n+1){
                for(i=0; i<count; i++){
                    v[k] = count;
                    k++;
                }
                count++;
            }

            printf("Caso %d: %d numeros\n", j,k);
            for(i=0; i<k; i++){
                if(i==k-1)
                    printf("%d", v[i]);
                else
                    printf("%d ", v[i]);
            }
            printf("\n\n");
            j++;
        }
    }

    return 0;
}
