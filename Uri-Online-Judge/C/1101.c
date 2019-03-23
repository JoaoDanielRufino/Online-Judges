include<stdio.h>

int main(){

    int x,y,soma=0,i;

    while(1){
        scanf("%d %d", &x,&y);
        if(x<=0 || y<=0){
            break;
        }
        if(x<y){
            for(i=x; i<=y; i++){
                 printf("%d ", i);
                 soma += i;
            }
            printf("Sum=%d\n", soma);
            soma=0;
        }
        if(x>y){
            for(i=y; i<=x; i++){
                printf("%d ", i);
                soma += i;
            }
            printf("Sum=%d\n", soma);
            soma=0;
        }
    }

    return 0;
}
