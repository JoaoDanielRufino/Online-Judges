#include <stdio.h>
#include <string.h>

int main(){

    char v[501];

    gets(v);

    if(strlen(v)>140)
        printf("MUTE\n");
    else
        printf("TWEET\n");

    return 0;
}
