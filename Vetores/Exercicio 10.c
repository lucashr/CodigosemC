#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define T 80
int main(){
int v[T], h, i, j, aux;
//Iniciando gerador
srand (time(0));
//Preenchendo o vetor
for(i = 0 ; i < T ; i++){
	v[i] = rand() % 80 + 1;
	scanf("%d", &v[i]);
	
}
// Mostrando o vetor
printf("\nElementos do vetor \n");
for(i = 0 ; i < T ; i++){
	v2[i] = v[i];
	printf("%d ", v2[i]);
}
//Ordenando com bubble sort
printf("\n\n\n");
for(i = 1 ; i < T ; i++){
	for(j = 0 ; j < T-i ; j++){
		if(v2[j] > v2[j+i]){
			aux = v2[j];
			v2[j] = v2[j+i];
			v2[j+i] = aux;
				
		}
		
	}

}
printf("\nElemento %d, posicao %d ", v2[i], j);



return 0;
}

