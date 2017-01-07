# include <stdio.h>
# include <stdlib.h>
int main(){
	int a, b, c=1;
	printf ("Digite um numero: ");
	scanf ("%d", &a);
	if(a > 0){
	for (b=0; b<a ; b++){
		printf("%d: ", c);
		c=c+2;
	
}
	}	
	else{
		printf("Nao e um numero positivo: ");
	}
	system ("pause");
	return 0;
}
