# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main () {
	int a, b, result;
	printf ("\n Digite o primeiro numero: ");
	scanf ("%d", &a);
	printf ("\n Digite o segundo numero: ");
	scanf ("%d", &b );
	if (b== a * a){
		printf ("\n O primeiro numero e multiplo do segundo: ");
	}
	else {
		printf("\n O primeiro numero nao e multiplo do segundo: ");
	}	
	
	system ("pause");
		
		return 0;
}
