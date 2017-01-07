#include <stdio.h>
#define T 3

int main(){
	int mat [T][T], i, j, cont = 0;
	printf("Digite 9 valores\n");
	for(i = 0 ; i < T ; i++){
		for(j = 0 ; j < T ; j++){
			scanf("%d", &mat[i][j]);			
		}
	}
	printf("\n");
	for(i = 0 ; i < T ; i++){
		for(j = 0 ; j < T ; j++){
		printf("%d ", mat[i][j]);		
		}
		printf("\n");	
	}
		for(i = 0 ; i < T ; i++){
		for(j = 0 ; j < T ; j++){
			if( mat[i][j] == mat[j][i]){
				cont++;
			}	
		}	
	}
    if(cont == 9){
    	printf("\nA matriz e simetrica");
	}
	else{
		printf("\nA matriz nao e simetrica");
	}
	
	


	
	
	
	return 0;
}


























// 3,5,6
