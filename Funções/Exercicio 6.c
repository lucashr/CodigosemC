#include <stdio.h>
#include <stdlib.h>

int mult_3(){
	int soma_mult3=0, i;
	for(i=0 ; i<=147 ; i=i+3){
			soma_mult3=soma_mult3 + i;
	}
	return soma_mult3;
}
int main(){
	int soma_m3;
	soma_m3=mult_3();
	printf("\nA soma dos primeiros 50 numeros multiplos de 3 e: %d\n", soma_m3);
	
	system("pause");
	return 0;
}
