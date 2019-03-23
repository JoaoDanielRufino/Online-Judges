#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int count=0,n=0;
    char corvo[10];

    while(count!=3){

        gets(corvo);

        if(strcmp(corvo,"---")==0)
            n += 0;
        else if(strcmp(corvo,"--*")==0)
            n += 1;
        else if(strcmp(corvo,"-*-")==0)
            n += 2;
        else if(strcmp(corvo,"-**")==0)
            n += 3;
        else if(strcmp(corvo,"*--")==0)
            n += 4;
        else if(strcmp(corvo,"*-*")==0)
            n += 5;
        else if(strcmp(corvo,"**-")==0)
            n += 6;
        else if(strcmp(corvo,"***")==0)
            n += 7;
        else if(strcmp(corvo,"caw caw")==0){
            printf("%d\n", n);
            n=0;
            count++;
        }
    }


    return 0;
}
