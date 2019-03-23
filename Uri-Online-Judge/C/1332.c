#include <stdio.h>
#include <string.h>

int main(){

    int n,i,count;
    char v[6],one[4]={"one"},two[4]={"two"},three[6]={"three"};

    scanf("%d", &n);

    while(n--){
        scanf("%s", &v);
        count=0;
        if(strlen(v)==3){
            for(i=0; i<strlen(v); i++){
                if(v[i]==one[i])
                    count++;
            }
            if(count==3 || count==3-1)
                printf("1\n");
            else
                printf("2\n");
        }
        else
            printf("3\n");
    }

    return 0;
}
