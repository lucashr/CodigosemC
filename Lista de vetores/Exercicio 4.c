#include <stdio.h>
#include <stdlib.h>
#define T 5
#define R 10
int main(){
	int v[T], v2[T], v3[R], i, j, aux;
	printf("\nDigite %d valores e aperte enter\n", T);		
	//Leitura do vetor 1
	for(i = 0 ; i < T ; i++){
		scanf("%d", &v[i]);
	}			
	printf("\nDigite mais %d valores e aperte enter\n", T);
	//Leitura do vetor 2
	for(i = 0 ; i < T ; i++){
		scanf("%d", &v2[i]);
	}
	//Mostrando vetor 1
	printf("\nVetor 1:\n");
	for(i = 0 ; i < T ; i++){
		printf("%d ", v[i]);
	}
	//Mostrando vetor 2
	printf("\n\nVetor 2:\n");
	for(i = 0 ; i < T ; i++){
		printf("%d ", v2[i]);
	}
	//Juntando vetor 1 e 2
	for(i = 0 ; i < T ; i++){
		v3[i] = v[i];
		v3[i+5] = v2[i];
	}
	//Ordenando com bubble sorte
	printf("\n\nVetores intercalados \n");
	for(i = 1 ;  i < R ; i++){
		for(j = 0 ; j < R-i ; j++){
			if (v3[j] > v3[j+1]){
				aux = v3[j];
				v3[j] = v3[j+1];
				v3[j+1] = aux;
				
			}
		}
	}
	for (j = 0 ; j < R ; j++){
		printf("%d ", v3[j]);
	}
	
		
	return 0;
}
