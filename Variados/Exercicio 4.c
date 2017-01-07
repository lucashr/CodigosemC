#include <stdio.h>
#define T 3

int main(){
	int v[T], i, j, aux;
	printf("Digite %d valores dando um espaco e aperte enter no final: ", T);
	for(i = 0 ; i < T ; i++){
		scanf("%d", &v[i]);
	}
	for(i = 1 ; i < T ; i++){
		for(j = 0 ; j < T - i ; j++){
			if(v[j] > v[j + 1]){
			aux = v[j];
			v[j] = v[j + 1];
			v[j + 1] = aux;	
			}
		}
	}
	for(i = 0 ; i < T ; i++){
		printf("%d ", v[i]);
	}
	
		
	
	return 0;
}
