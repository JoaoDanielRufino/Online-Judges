#include <stdio.h>
#include <stdlib.h>

int main(){

    int n,i,j,v[100][100];

    while(1){
        scanf("%d", &n);
        if(n==0) break;

        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                if(i==j)
                    v[i][j] = 1;
                if(i<j)
                    v[i][j] = abs(i-(j+1));
                v[j][i] = v[i][j];
                if(j==n-1)
                    printf("%3d", v[i][j]);
                else
                    printf("%3d ", v[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
