#include <stdio.h>
#define T 5

int main(){
	int mat [T][T], i, j, diagprincipal = 1, diagsecundaria = 1, calc_det;
	printf("Digite 25 valores\n");
	for(i = 0 ; i < T ; i++){
		for(j = 0 ; j < T ; j++){
			scanf("%d", &mat[i][j]);			
		}
	}
	printf("\nMatriz digitada: \n\n");
	for(i = 0 ; i < T ; i++){
		for(j = 0 ; j < T ; j++){
		printf("%d  ", mat[i][j]);		
		}
		printf("\n");	
	}
	for(i = 0 ; i < T ; i++){
		for(j = 0 ; j < T ; j++){
			if(i == j){
				diagprincipal *=  mat[i][j];
				diagsecundaria *= mat[i][T-j-1];
				
			}
	    }
   }
   printf("\n------Diagonal principal------\n%d", diagprincipal);
   printf("\n------Diagonal secundaria------\n%d", diagsecundaria);
   printf("\nProduto da diagonal principal menos a secundaria da matriz digitada: \n");

   calc_det = diagprincipal - diagsecundaria;
   printf("\nO determinante da matriz e: \n%d ", calc_det);
	
	return 0;
}
