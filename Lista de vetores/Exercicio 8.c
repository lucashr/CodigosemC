#include <stdio.h>
#include <stdlib.h>
#include <time.h>
# define T 50
int main(){
	int v[T], i, j, aux;
	//Inciar o gerador
	srand (time(0));
	for(i = 0 ; i < T ; i++){
		v[i] = rand() % 1000;
	}
	//Ordenando os numeros com bubble sort
	for(i = 1 ; i < T ; i++){
		for(j = 0 ; j < T-i ; j++){
			if(v[i] > v[j+i]){
				aux = v[j];
				v[j] = v[j+i];
				v[j+i] = aux;
			}
		}
	}
	//Exibindo pares e suas posicoes
	printf("\nPares e suas posicoes \n");
	for(i = 0 ; i < T ; i++){
		if(v[i] % 2 == 0){
			printf("\nElemento %d, posicao %d ", v[i], i);
		}
	}	
	return 0;
}
