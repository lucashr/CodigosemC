#include <stdio.h>
#define T 10

int main(){
	int v[T], v2[T], v3[T], i, multi;
	printf("\nDigite %d valores e aperte enter\n ", T);
	//Leitura vetor 1
	for(i = 0 ; i < T ; i++){
		scanf("%d", &v[i]);
	}
	printf("\nDigite mais %d valores e aperte enter\n ", T);
	//Leitura vetor 2
	for(i = 0 ; i < T ; i++){
		scanf("%d", &v2[i]);
	}
	//Multiplicando os indices
	for(i = 0 ; i < T ; i++){
		multi = v[i] * v2[i];
		v3[i] = multi;
	}
	//Mostrando o vetor 3
	printf("\n\nA multiplicacao dos elementos de mesmo indice e:\n");
	for(i = 0 ; i < T ; i++){
		printf("%d ", v3[i]);
	}
	return 0;
}
