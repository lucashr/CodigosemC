#include <stdio.h>

int main(){
	int mat[2][3], tmat[2][3], i, j;
	printf("Digite 6 valores \n");
		for(i = 0 ; i < 2 ; i++){
		    for(j = 0 ; j < 3 ; j++){
			scanf("%d", &mat[i][j]);			
		}
	}
	printf("\n");
	printf("\nMatriz digitada: \n");	
	for(i = 0 ; i < 2 ; i++){
		    for(j = 0 ; j < 3 ; j++){
				printf("%d ", mat[i][j]);
			}	
			printf("\n");	
		}
		printf("\n");
		printf("\nMatriz transposta: \n");
		for(i = 0 ; i < 3 ; i++){
		    for(j = 0 ; j < 2 ; j++){
		    tmat[i][j] = mat[j][i];
				printf("%d ", tmat[i][j]);
			}	
			printf("\n");	
		}
	
	
	
	
	
	
	
	return 0;
}
