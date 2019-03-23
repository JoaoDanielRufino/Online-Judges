#include<stdio.h>

int main() {

	unsigned long long int n,i,total=0,estrelas=0,indice=0,carneiros=0;

	scanf("%llu", &n);

    if(n==0)
        printf("1 0\n");

	long int v[n];

	for(i=0; i<n; i++){
		scanf("%ld", &v[i]);
		total += v[i];
	}

	if(v[0]==0)
		printf("1 %llu\n", total);

	if(v[0]%2==0 && v[0]!=0)
		printf("1 %llu\n", total-1);

	else if(v[0]%2!=0){

		i=0;
		while(1){
			if(v[i]%2!=0){
				v[i] -= 1;
				if(i==indice){
					estrelas++;
					indice++;
				}
				carneiros++;
				i++;
			}

			if(i==-1 || i==n)
				break;

			if(v[i]%2==0){
				v[i] -= 1;
				if(i==indice)
					estrelas++;
                if(v[i]>0)
                    carneiros++;
				i--;
			}
		}
		printf("%llu %llu\n", estrelas, total-carneiros);
	}

	return 0;
}
