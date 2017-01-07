#include <stdio.h>
#include <stdlib.h>

int calc_par(){
	int soma_imp=0, i;
	for(i=1 ; i<=100 ; i=i+2){
		soma_imp=soma_imp + i;
	}
	return soma_imp;
}
int main(){
	int soma_impares;
	soma_impares=calc_par();
	printf("\nA soma dos primeiros 50 numeros impares a partir de 1 e: %d\n", soma_impares);
	
	system("pause");
	return 0;
}
