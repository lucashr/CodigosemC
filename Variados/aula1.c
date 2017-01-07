# include <stdio.h>
int main(){
	float val_compra,val_desc, val_pagar;
	printf ("\n Digite o valor da compra: \n");
	scanf ("%f", &val_compra);
	printf ("\n Digite o valor do desconto \n");
	scanf ("%f", &val_desc);
	val_desc= (val_compra * val_desc)/ 100;
	val_pagar= (val_compra - val_desc);
	printf ("\n Total a pagar: %f Valor do desconto da compra: %f \n",val_pagar, val_desc);
	return 0;
	
	
	
	
	
	
	
	
	
	
}
