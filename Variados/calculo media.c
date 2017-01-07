#include <stdio.h>
int main() {
	float num1, num2, num3, media;
	printf ("\n Digite a primeira nota: \n");
	scanf("%f", &num1);
	printf ("\n Digite a segunda nota: \n");
	scanf("%f", &num2);
	printf ("\n Digite a terceira nota: \n");
	scanf("%f", &num3);
	media= (num1 + num2 + num3)/3;
	printf("\n Media= %f \n", media);
	return 0;	
}

