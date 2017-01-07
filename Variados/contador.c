# include <stdio.h>
# include <stdlib.h>
int main(){
	int n1, n2, cont, soma=n1, sub=n1;
	printf ("Digite dois valores: ");
	scanf ("%d %d", &n1, &n2);
	if (n1 <= n2){
		for(cont=1 ; cont <= n2 ; cont++){
			soma=soma + 1;
			printf (" %d ", soma);
		}
	}
	else {
		for(cont=n2 ; n1 >= n2 ; cont ++){
			sub= sub - 1;
			printf (" %d ", sub);
		}
	}
	system ("pause");
	return 0;
}
