# include <stdio.h>
int main () {
	int dias, anos, meses,diasf;
	printf ("\n Digite o numero de dias: \n");
	scanf ("%d", &dias);
	anos= dias/365;
	meses= dias/30;
	diasf= meses*30;
	printf ("\n %d Dias Correspondem a: %d Anos ou %d Meses \n", dias, anos, meses);
	return 0;
	
	
	
	
	
	
	
}
