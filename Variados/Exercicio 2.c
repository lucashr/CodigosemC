#include <stdio.h>

int main(){
	int n;
	printf("Digite um valor: ");
	scanf("%d", &n);
	if(n % 3 == 0){
		printf("O numero digitado e multiplo de 3 ");
	}
	else{
		printf("O numero digitado nao e multiplo de 3");
	}

	
	
	return 0;
}
