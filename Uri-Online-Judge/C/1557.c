#include <stdio.h>
#include <stdlib.h>

int main(){

    int n,i,j,k,v[100][100],count,l;

    while(1){
        scanf("%d", &n);
        if(n==0) break;

        count = 1;l=1;
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                v[i][j] = count;
                count *= 2;
            }
            l *=2;
            count = l;
        }

        k = v[n-1][n-1]; count=0;
        while(1){
            k = k/10;
            count++;
            if(k<=0) break;
        }

        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                if(j==n-1)
                    printf("%*d", count,v[i][j]);
                else
                    printf("%*d ", count,v[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
