#include <stdio.h>
#include <stdlib.h>

int calc_mult(){
	int mult_2=0, i;
	for(i=0 ; i<=100 ; i++){
		if(i % 2 == 0){
			mult_2=mult_2 + i;
		}
	}
	return mult_2;
}
int main(){
	int multiplos_2;
	multiplos_2=calc_mult();
	printf("\nA soma dos primeiros 50 numeros pares a partir de 2 e: %d\n", multiplos_2);
	
	system("pause");
	return 0;
}
