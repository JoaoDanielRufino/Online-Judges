#include <stdio.h>

int main(){

    int n,i,j,v[101][101];

    scanf("%d", &n);

    for(i=0; i<n+1; i++){
        for(j=0; j<n+1; j++){
            scanf("%d", &v[i][j]);
        }
    }

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(v[i][j]+v[i][j+1]+v[i+1][j]+v[i+1][j+1]>=2)
                printf("S");
            else
                printf("U");
        }
        printf("\n");
    }

    return 0;
}
