#include <stdio.h>

int main(){

    int m,d,dif;

    while(scanf("%d %d", &m,&d)!=EOF){

        if(m==12){
            dif = 25-d;
            if(dif>0 && dif!=1)
                printf("Faltam %d dias para o natal!\n", dif);
            else if(dif==0)
                printf("E natal!\n");
            else if(dif<0)
                printf("Ja passou!\n");
            else
                printf("E vespera de natal!\n");
        }
        else if(m==11)printf("Faltam %d dias para o natal!\n", 25+30-d);
        else if(m==10)printf("Faltam %d dias para o natal!\n", 31+25+30-d);
        else if(m==9)printf("Faltam %d dias para o natal!\n", 30+31+25+30-d);
        else if(m==8)printf("Faltam %d dias para o natal!\n", 31+30+31+25+30-d);
        else if(m==7)printf("Faltam %d dias para o natal!\n", 31+31+30+31+25+30-d);
        else if(m==6)printf("Faltam %d dias para o natal!\n", 30+31+31+30+31+25+30-d);
        else if(m==5)printf("Faltam %d dias para o natal!\n", 31+30+31+31+30+31+25+30-d);
        else if(m==4)printf("Faltam %d dias para o natal!\n", 30+31+30+31+31+30+31+25+30-d);
        else if(m==3)printf("Faltam %d dias para o natal!\n", 31+30+31+30+31+31+30+31+25+30-d);
        else if(m==2)printf("Faltam %d dias para o natal!\n", 29+31+30+31+30+31+31+30+31+25+30-d);
        else if(m==1)printf("Faltam %d dias para o natal!\n", 31+29+31+30+31+30+31+31+30+31+25+30-d);
    }

    return 0;
}
