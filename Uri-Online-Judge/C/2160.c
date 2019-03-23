#include <stdio.h>
#include <string.h>

int main(){

    char v[502];

    gets(v);

    if(strlen(v)<=80)
        printf("YES\n");
    else
        printf("NO\n");


    return 0;
}
