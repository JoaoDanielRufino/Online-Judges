#include <stdio.h>
#include <stdlib.h>

int main(){

    unsigned long long int x,n,y,i,j,q,op,c1,c2,m,aux;

    scanf("%llu", &x);

    while(x--){
        unsigned long long int v[10000];
        scanf("%llu", &n);
        for(i=0; i<n; i++){
            v[i] = 0ULL;
            scanf("%llu", &y);
            for(j=0; j<y; j++){
                scanf("%llu", &m);
                v[i] |= (1ULL << m);
            }
        }

        scanf("%llu", &q);
        while(q--){
            scanf("%llu %llu %llu", &op,&c1,&c2);
            int count=0;
            if(op==1)
                aux = v[c1-1] & v[c2-1];
            else
                aux = v[c1-1] | v[c2-1];
            m = 1ULL;
            for(i=0; i<62; i++){
                if(m & aux)
                    count++;
                m = (m << 1);
            }
            printf("%d\n", count);
        }
    }

    return 0;
}
