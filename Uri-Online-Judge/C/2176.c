#include <stdio.h>
#include <string.h>

int main(){

    int i,n,count=0;
    char v[101];

    scanf("%s", &v);

    n = strlen(v);
    for(i=0; i<n; i++){
        if(v[i]=='1')
            count++;
    }

    if(count%2==0)
        v[n] = '0';
    else
        v[n] = '1';
    v[n+1] = '\0';

    printf("%s\n", v);

    return 0;
}
