#include <stdio.h>

int mdc(int max, int min){
    if(!min)
        return max;
    else
        return mdc(min,max%min);
}

int main(){

    int n,n1,d1,n2,d2,num,den,t;
    char c1,c2,c3;

    scanf("%d", &n);

    while (n--){
        scanf("%d %c %d %c %d %c %d", &n1,&c1,&d1,&c2,&n2,&c3,&d2);
        if(c2=='+'){
            num = (n1*d2) + (n2*d1);
            den = d1*d2;
            t = mdc(num,den);
            if(t<0)
                t = -1*t;
            printf("%d/%d = ", num,den);
            num = num/t;
            den = den/t;
            printf("%d/%d\n", num,den);
        }
        else if(c2=='-'){
            num = (n1*d2) - (n2*d1);
            den = d1*d2;
            t = mdc(num,den);
            if(t<0)
                t = -1*t;
            printf("%d/%d = ", num,den);
            num = num/t;
            den = den/t;
            printf("%d/%d\n", num,den);
        }
        else if(c2=='*'){
            num = n1*n2;
            den = d1*d2;
            t = mdc(num,den);
            if(t<0)
                t = -1*t;
            printf("%d/%d = ", num,den);
            num = num/t;
            den = den/t;
            printf("%d/%d\n", num,den);
        }
        else if(c2=='/'){
            num = n1*d2;
            den = n2*d1;
            t = mdc(num,den);
            if(t<0)
                t = -1*t;
            printf("%d/%d = ", num,den);
            num = num/t;
            den = den/t;
            printf("%d/%d\n", num,den);
        }
    }

    return 0;
}
