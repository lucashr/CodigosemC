#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define T 10
int main(){
	int v[T], v2[T], i, soma, cont; 
	float media;
	//Iniciando o gerador
	srand (time(0));
	for(i = 0 ; i < T ; i++){
		v[i] = rand () % 100;
	}
	//Mostrando o vetor 
	printf("\nVetor inicial \n");
	for(i = 0 ; i < T ; i++){
		printf("%d ", v[i]);
	}
	//Somando os valores
	for (i = 0, soma=0 ; i < T ; i++){
		soma = soma + v[i];
	} 
	//Calculando a media
	media = (float)soma / T;
	//Mostrando o vetor final
	printf("\n\nVetor final \n");
	for(i = 0 ; i < T ; i++){
		if(v[i] > media){
			v[i] = 1;
			
		}
		else if(v[i] < media){
			v[i] = 0;
			
		}
		printf("%d ", v[i]);
	}
	
	
	
	
	
	
	return 0;
}
