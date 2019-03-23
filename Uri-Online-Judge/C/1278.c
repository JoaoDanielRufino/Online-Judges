#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void removespace(char *v){
    int l=0;
    char *i,*j;
    i = v;
    j = v;
    while(*j!='\0'){
        if(*j!=' '){
            *i = *j;
            i++;
            l = 1;
        }
        if((*j==' ') && l){
            ++j;
            if(*j>='A' && *j<='Z'){
                *i = ' ';
                i++;
            }
            --j;
        }
        j++;
    }
    *i = '\0';
}

int main(){

    int n,i,l=0;
    char v[101][51];

     while(1){
         int max=0;
         scanf("%d", &n);
         if(!n)
            break;
          else{
              if(l)
                printf("\n");
            for(i=0; i<n; i++){
                getchar();
                scanf("%[^\n]", v[i]);
                removespace(v[i]);
                if(strlen(v[i])>max)
                    max = strlen(v[i]);
            }
            for(i=0; i<n; i++)
                printf("%*s\n", max,v[i]);
          }
         l = 1;
       }

    return 0;
}
