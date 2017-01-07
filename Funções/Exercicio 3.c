#include <stdio.h>
#include <stdlib.h>

int calc_par(){
	int soma_par=0, i;
	for(i=2 ; i<=100 ; i=i+2){
			soma_par=soma_par + i;
	}
	return soma_par;
}
int main(){
	int soma_pares;
	soma_pares=calc_par();
	printf("\nA soma dos primeiros 50 numeros pares a partir de 2 e: %d\n", soma_pares);
	
	system("pause");
	return 0;
}
