#include <stdio.h>
#include <stdlib.h>
#define T 10
 int main(){
int v[T], i, j, aux;
printf("\nDigite %d valores: ", T);
  //Leitura do vetor
  for(i = 0 ; i < T ; i++){
   scanf("%d", &v[i]);
}
  //Ordenação pelo bubble sort
  for(i = 1 ; i < T ; i++){
    for(j = 0 ; j < T-i ; j++){
      if(v[j] > v[j+1]){
	  aux = v[j];
	  v[j] = v[j+1];
	  v[j+1] = aux;	
  }
 }
}

	//Exibindo multiplos de 3 e suas posições
	printf("\nMultiplos de 3 e suas posicoes:\n");
	for(i = 0 ; i < T ; i++){
		if(v[i] % 3 == 0){
			printf("\nElemento %d, posicao %d", v[i], i);
		}
	}
	
	return 0;  
}
