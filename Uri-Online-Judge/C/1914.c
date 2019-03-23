#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

  long long int x,y,n,i,soma;
  char p1[201],v1[10],p2[201],v2[10];

  scanf("%llu", &n);

  for(i=0; i<n; i++){
    scanf("%s %s %s %s", &p1,&v1,&p2,&v2);
    scanf("%lld %lld", &x,&y);

    soma = x+y;

    if(v1[0]=='P'){
      if(soma%2==0)
        printf("%s\n", p1);
      else
        printf("%s\n", p2);
    }

    else{
      if(soma%2!=0)
        printf("%s\n", p1);
      else
        printf("%s\n", p2);
    }
  }


  return 0;
}
