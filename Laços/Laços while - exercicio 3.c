# include <stdio.h>
# include <stdlib.h>
int main(){
	int a, b, c;
	printf ("Digite um numero: ");
	scanf ("%d", &a);
	if (a > 0){
		b=0;
		c=1;
		while (b < a){
			printf ("%d: ", c);
			c= c + 2;
			b++;
		}
		
	}	
	else{
		printf("Não e um numero positivo: ");
	}
	system ("pause");
	return 0;
}
