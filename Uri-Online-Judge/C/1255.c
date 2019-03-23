#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    int n,i,j,num,max;
    char s[201];

    scanf("%d ", &n);

    while(n--){
        int v[26]={0};
        char pos[27]={'\0'},c[201]={'\0'};
        gets(s);
        for(i=0; i<strlen(s); i++){
            c[i] = tolower(s[i]);
            if(c[i]>='a' && c[i]<='z'){
                num = c[i]-97;
                v[num]++;
            }
        }
        max=0;
        for(i=0; i<26; i++){
            if(v[i]>max)
                max = v[i];
        }
        j=0;
         for(i=0; i<26; i++){
            if(v[i]==max){
                pos[j] = (char) i+97;
                j++;
            }
        }
        printf("%s\n", pos);
    }

    return 0;
}
