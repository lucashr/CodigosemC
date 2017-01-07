#include <stdio.h>

#define T 5
int main(){
	int v[T], i, soma, cont;
	float media;
	//Leitura do vetor
	printf("\nDigite %d valores: ", T);
	for(i = 0 ; i < T-i ; i++){
		scanf("%d ", &v[i]);
	}
	//Soma dos valores
	for(i = 0, soma=0 ; i < T ; i++){
		soma = soma + v[i];
	}
	//Dividindo para calcular a media
	media = (float)soma / T;
	//Mostrando a media
	printf("\nMedia = %.2f\n", media);
	//Verificando se tem algum valor igual a media
	for(i = 0, cont=0 ; i < T ; i++){
		if(v[i] == media){
			printf("\nElemento da posicao %d e igual a media", i);
			cont++;
		}
	}
	//cont usado para mostrar a msg, caso não existam elementos iguais a zero
	if(cont == 0){
		printf("\nNao existem elementos iguais a media");
	}
	return 0;	
}
