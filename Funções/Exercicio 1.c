#include <stdio.h>
#include <stdlib.h>

int fatorial(int num){
	int i,a, fator=1;
	for(i = num ; i >= 1  ; i--){
		fator =  fator * i;
	}
	return fator;
}
int main(){
	int a,b,num;
	printf("\nDigite um valor \n");
	scanf("%d", &num);
	a = fatorial(num);
	printf("\nO fatorial do numero digitado e: %d\n", a);
	
	system ("pause");
	return 0;
}
