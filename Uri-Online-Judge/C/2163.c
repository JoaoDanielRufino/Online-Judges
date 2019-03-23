#include <stdio.h>

int main(){

    int n,m,i,j,posi=0,posj=0,k,l,count;

    scanf("%d %d", &n,&m);
    int v[n][m];

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &v[i][j]);
            }
        }

    for(i=1; i<n-1; i++){
        for(j=1; j<m-1; j++){
            if(v[i][j]==42)
                if(v[i-1][j-1]==7 && v[i-1][j]==7 && v[i-1][j+1]==7)
                    if(v[i][j-1]==7 && v[i][j+1]==7)
                        if(v[i+1][j-1]==7 && v[i+1][j]==7 && v[i+1][j+1]==7){
                            posi = i+1;
                            posj = j+1;
                        }
        }
    }

    printf("%d %d\n", posi,posj);

    return 0;
}
