#include <stdio.h>
#include <stdlib.h>

int main(){

    int n,i,j,k,v[102][102];

    while(scanf("%d", &n)!=EOF){

        k=n/3;
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                if(i==(n-1)/2 && j==(n-1)/2)
                    v[i][j] = 4;
                else if((i>=k && j>=k) && (i<=(n-1)-k && j<=(n-1)-k))
                    v[i][j] = 1;
                else if(i==j && (i!=(n-1)/2 && j!=(n-1)/2))
                    v[i][j] = 2;
                else if(i+j==n-1 && (i!=(n-1)/2 && j!=(n-1)/2))
                    v[i][j] = 3;
                else
                    v[i][j] = 0;
                printf("%d", v[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
