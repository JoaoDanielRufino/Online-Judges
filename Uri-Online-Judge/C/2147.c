#include <stdio.h>
#include <string.h>

int main(){

    int n,i;
    float length;
    char v[10001];

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%s", v);
        length = strlen(v);
        printf("%.2f\n", length/100);
    }

    return 0;
}
